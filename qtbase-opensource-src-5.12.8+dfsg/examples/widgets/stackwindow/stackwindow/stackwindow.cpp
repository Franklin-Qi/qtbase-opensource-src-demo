#include "stackwindow.h"
#include "ui_stackwindow.h"

/**
 * @brief StackWindow::StackWindow
 * @param parent
 * 1.QT创建堆叠窗口使用类，但是使用它时主窗口不能是MainWindow，否则会出现布局错误，本例中使用基类为QDialog
 *
 * QStackedWidget
 * 2.可以配合列表框QListWidget和QComboBox使用
 */
StackWindow::StackWindow(QWidget *parent)
    : QDialog(parent)
{
    m_listWidget = new QListWidget(this);
    m_listWidget->insertItem(0, "mainPage");
    m_listWidget->insertItem(1, "life");
    m_listWidget->insertItem(2, "work");

    m_label1 = new QLabel("Enjoy life");
    m_label2 = new QLabel("Enjoy work");
    m_label3 = new QLabel("Enjoy training");

    m_stackedWidget = new QStackedWidget(this);
    m_stackedWidget->addWidget(m_label1);
    m_stackedWidget->addWidget(m_label2);
    m_stackedWidget->addWidget(m_label3);

    QHBoxLayout *mainLayout = new QHBoxLayout();
    mainLayout->setMargin(10);
    mainLayout->setSpacing(10);

    mainLayout->addWidget(m_listWidget);
    mainLayout->addWidget(m_stackedWidget, 0, Qt::AlignHCenter);
    mainLayout->setStretchFactor(m_listWidget, 1);
    mainLayout->setStretchFactor(m_stackedWidget, 3);

    setLayout(mainLayout);

    connect(m_listWidget, SIGNAL(currentRowChanged(int)), m_stackedWidget, SLOT(setCurrentIndex(int)));

}

StackWindow::~StackWindow()
{
}

