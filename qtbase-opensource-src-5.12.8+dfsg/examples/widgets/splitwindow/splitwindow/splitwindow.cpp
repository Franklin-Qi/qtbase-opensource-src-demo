#include "splitwindow.h"
#include "ui_splitwindow.h"

#include <QTextEdit>
#include <QSplitter> // 分割窗口类

/**
 * @brief SplitWindow::SplitWindow
 * @param parent
 * QT中QSplitter类可以用来灵活分割窗口，从而产生可用的布局，在以后进行界面布局很有用。
 */
SplitWindow::SplitWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SplitWindow)
{
    ui->setupUi(this);

    QFont font("ZYSong18030",12);//指定显示字体

    setFont(font);//设置应用程序字体

    //主分割窗口
    QSplitter *spwin = new QSplitter(Qt::Horizontal,0);//指定水平分割
    QTextEdit * te = new QTextEdit("Left Widget",spwin);
    te->setAlignment(Qt::AlignCenter);

    //右分割窗口
    QSplitter *spright = new QSplitter(Qt::Vertical,spwin);
    spright->setOpaqueResize(false);
    QTextEdit *teup = new QTextEdit("Top Widget",spright);
    teup->setAlignment(Qt::AlignCenter);

    QTextEdit *tedown = new QTextEdit("Down Widget",spright);
    tedown->setAlignment(Qt::AlignCenter);

    spwin->setStretchFactor(1,1);

    spwin->setWindowTitle("分割窗口");

    spwin->show();

}

SplitWindow::~SplitWindow()
{
    delete ui;
}

