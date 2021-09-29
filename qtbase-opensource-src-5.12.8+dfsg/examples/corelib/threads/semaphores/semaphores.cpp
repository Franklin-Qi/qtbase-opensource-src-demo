/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the examples of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:BSD$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** BSD License Usage
** Alternatively, you may use this file under the terms of the BSD license
** as follows:
**
** "Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**   * Redistributions of source code must retain the above copyright
**     notice, this list of conditions and the following disclaimer.
**   * Redistributions in binary form must reproduce the above copyright
**     notice, this list of conditions and the following disclaimer in
**     the documentation and/or other materials provided with the
**     distribution.
**   * Neither the name of The Qt Company Ltd nor the names of its
**     contributors may be used to endorse or promote products derived
**     from this software without specific prior written permission.
**
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
** $QT_END_LICENSE$
**
****************************************************************************/


/*
 * 演示使用 Qt 的多线程编程。
 *
 * 生产者将数据写入缓冲区，直到它到达缓冲区的末尾，此时它会从头开始重新启动，覆盖现有数据。消费者线程在生成数据时读取数据并将其写入标准错误。
 * 信号量使具有比互斥体更高级别的并发成为可能。如果对缓冲区的访问由QMutex 保护，则消费者线程无法与生产者线程同时访问缓冲区。然而，让两个线程同时在缓冲区的不同部分工作并没有什么坏处。
 *
 * 该示例包含两个类：Producer和Consumer。两者都继承自QThread。用于在这两个类之间进行通信的循环缓冲区和保护它的信号量是全局变量。
 * 使用QSemaphore解决生产者-消费者问题的替代方法是使用QWaitCondition和QMutex。这就是等待条件示例所做的。
 */
#include <QtCore>

#include <stdio.h>
#include <stdlib.h>

//! [0]
//! DataSize是生产者将生成的数据量。为了使示例尽可能简单，我们将其设为常量。BufferSize是循环缓冲区的大小。
//! 它小于DataSize，这意味着在某个时刻生产者将到达缓冲区的末尾并从头开始重新启动。
//!
//! 为了同步生产者和消费者，我们需要两个信号量。该freeBytes信号控制缓冲的“自由”区域（该区域的生产商还没有装满数据尚未或消费者已经阅读）。
//! 该usedBytes信号灯控制的“拿来主义”区域的缓冲区（即生产者填补了区域，但该消费者没有读尚未）。
//! 信号量一起确保生产者永远不会BufferSize超前消费者多字节，并且消费者永远不会读取生产者尚未生成的数据。
//! 该freeBytes信号被初始化BufferSize，因为最初整个缓冲区是空的。的usedBytes（如果没有指定缺省值）信号被初始化为0。
const int DataSize = 10;

const int BufferSize = 8;
char buffer[BufferSize];

QSemaphore freeBytes(BufferSize);
QSemaphore usedBytes;
//! [0]

//! [1]
//! 生产者生成DataSize数据字节。在将一个字节写入循环缓冲区之前，它必须使用freeBytes信号量获取一个“空闲”字节。
//! 该QSemaphore ::获取如果消费者没有跟上步伐与生产商（）调用可能会阻止。
//! 最后，生产者使用usedBytes信号量释放一个字节。“空闲”字节已成功转换为“已用”字节，可供消费者读取。
class Producer : public QThread
//! [1] //! [2]
{
public:
    void run() override
    {
        for (int i = 0; i < DataSize; ++i) {
            freeBytes.acquire();
            buffer[i % BufferSize] = "ACGT"[QRandomGenerator::global()->bounded(4)];
            usedBytes.release();
        }
    }
};
//! [2]

//! [3]
//! 代码与生产者非常相似，除了这次我们获取一个“已使用”字节并释放一个“空闲”字节，而不是相反。
class Consumer : public QThread
//! [3] //! [4]
{
    Q_OBJECT
public:
    void run() override
    {
        for (int i = 0; i < DataSize; ++i) {
            usedBytes.acquire();
            fprintf(stderr, "%c", buffer[i % BufferSize]);
            freeBytes.release();
        }
        fprintf(stderr, "\n");
    }
};
//! [4]

//! [5]
//! 那么当我们运行程序时会发生什么呢？最初，生产者线程是唯一可以做任何事情的线程；消费者被阻塞等待usedBytes信号量被释放（其初始可用（）计数为 0）。
//! 一旦生产者将一个字节放入缓冲区，freeBytes.available()即为BufferSize- 1 和usedBytes.available()1。此时，可能会发生两种情况：
//! 消费者线程接管并读取该字节，或者生产者线程生成第二个字节。
//! 本示例中介绍的生产者-消费者模型使得编写高度并发的多线程应用程序成为可能。
//! 在多处理器机器上，该程序的速度可能是等效的基于互斥锁的程序的两倍，因为这两个线程可以在缓冲区的不同部分同时处于活动状态。
//! 请注意，这些好处并不总是能实现。获取和释放QSemaphore 是有成本的。在实践中，将缓冲区划分为块并对块而不是单个字节进行操作可能是值得的。
//! 缓冲区大小也是一个必须根据实验仔细选择的参数。
int main(int argc, char *argv[])
//! [5] //! [6]
{
    QCoreApplication app(argc, argv);
    Producer producer;
    Consumer consumer;
    producer.start();
    consumer.start();

    /// 我们创建两个线程并调用QThread::wait () 以确保两个线程在退出之前都有时间完成：
    producer.wait();
    consumer.wait();
    return 0;
}
//! [6]

#include "semaphores.moc"
