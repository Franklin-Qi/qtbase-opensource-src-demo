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
 * 与单独使用互斥锁相比，等待条件可以实现更高级别的并发性。如果对缓冲区的访问仅由QMutex 保护，则消费者线程无法与生产者线程同时访问缓冲区。
 * 然而，让两个线程同时在缓冲区的不同部分工作并没有什么坏处。
 *
 * 该示例包含两个类：Producer和Consumer。两者都继承自QThread。用于在这两个类之间进行通信的循环缓冲区和保护它的同步工具是全局变量。
 * 使用QWaitCondition和QMutex解决生产者-消费者问题的替代方法是使用QSemaphore。这就是信号量示例所做的。
 */

#include <QtCore>

#include <stdio.h>
#include <stdlib.h>

//! [0]
//! DataSize是生产者将生成的数据量。为了使示例尽可能简单，我们将其设为常量。BufferSize是循环缓冲区的大小。
//! 它小于DataSize，这意味着在某个时刻生产者将到达缓冲区的末尾并从头开始重新启动。
//!
//! 为了同步生产者和消费者，我们需要两个等待条件和一个互斥锁。在bufferNotEmpty当制片人已经产生了一些数据，告诉消费者，它可以开始阅读条件获得信号。
//! 在bufferNotFull当消费者已经看了一些数据，告诉生产者，它可以产生更多的条件获得信号。的numUsedBytes是在包含数据的缓冲器中的字节的数量。
//! 等待条件、互斥体和numUsedBytes计数器一起确保生产者永远不会比BufferSize消费者多字节，并且消费者永远不会读取生产者尚未生成的数据。
const int DataSize = 10;

const int BufferSize = 8;
char buffer[BufferSize];

QWaitCondition bufferNotEmpty;
QWaitCondition bufferNotFull;
QMutex mutex;
int numUsedBytes = 0;
//! [0]

//! [1]
//! 生产者生成DataSize数据字节。在将一个字节写入循环缓冲区之前，它必须首先检查缓冲区是否已满（即，numUsedBytes等于BufferSize）。
//! 如果缓冲区已满，则线程等待该bufferNotFull条件。
//!
//! 最后，生产者递增numUsedBytes并发出信号表示条件bufferNotEmpty为真，因为numUsedBytes它必然大于 0。
//! 我们numUsedBytes使用互斥锁保护对变量的所有访问。此外，QWaitCondition::wait () 函数接受一个互斥体作为其参数。
//! 该互斥锁在线程进入休眠状态之前解锁，并在线程唤醒时锁定。此外，从锁定状态到等待状态的转换是原子的，以防止发生竞争条件。
class Producer : public QThread
//! [1] //! [2]
{
public:
    Producer(QObject *parent = NULL) : QThread(parent)
    {
    }

    void run() override
    {
        for (int i = 0; i < DataSize; ++i) {
            mutex.lock();
            if (numUsedBytes == BufferSize)
                bufferNotFull.wait(&mutex);
            mutex.unlock();

            buffer[i % BufferSize] = "ACGT"[QRandomGenerator::global()->bounded(4)];

            mutex.lock();
            ++numUsedBytes;
            bufferNotEmpty.wakeAll();
            mutex.unlock();
        }
    }
};
//! [2]

//! [3]
//! 代码与生产者非常相似。在读取字节之前，我们检查缓冲区是否为空（numUsedBytes为 0）而不是是否已满，bufferNotEmpty如果为空则等待条件。
//! 读取字节后，我们递减numUsedBytes（而不是递增），并发出bufferNotFull条件信号（而不是bufferNotEmpty条件）。
class Consumer : public QThread
//! [3] //! [4]
{
    Q_OBJECT
public:
    Consumer(QObject *parent = NULL) : QThread(parent)
    {
    }

    void run() override
    {
        for (int i = 0; i < DataSize; ++i) {
            mutex.lock();
            if (numUsedBytes == 0)
                bufferNotEmpty.wait(&mutex);
            mutex.unlock();

            fprintf(stderr, "%c", buffer[i % BufferSize]);

            mutex.lock();
            --numUsedBytes;
            bufferNotFull.wakeAll();
            mutex.unlock();
        }
        fprintf(stderr, "\n");
    }

signals:
    void stringConsumed(const QString &text);
};
//! [4]


/*
 * 那么当我们运行程序时会发生什么呢？最初，生产者线程是唯一可以做任何事情的线程；消费者被阻塞，等待bufferNotEmpty条件发出信号（numUsedBytes为 0）。
 * 一旦生产者在缓冲区中放入了一个字节，numUsedBytes则为BufferSize- 1 并bufferNotEmpty发出条件信号。
 * 此时，可能会发生两件事：消费者线程接管并读取该字节，或者生产者生成第二个字节。
 *
 * 本示例中介绍的生产者-消费者模型使得编写高度并发的多线程应用程序成为可能。在多处理器机器上，该程序的速度可能是等效的基于互斥锁的程序的两倍，
 * 因为这两个线程可以在缓冲区的不同部分同时处于活动状态。
 */

//! [5]
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

#include "waitconditions.moc"
