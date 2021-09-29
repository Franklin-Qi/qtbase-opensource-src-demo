/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QTextEdit *clientMessages;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *connectButton;
    QPushButton *shutdownButton;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_2;
    QTextEdit *serverMessages;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1200, 550);
        MainWindow->setMinimumSize(QSize(1200, 550));
        MainWindow->setMaximumSize(QSize(1200, 550));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_3 = new QHBoxLayout(centralwidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMinimumSize(QSize(590, 400));
        groupBox->setFlat(true);
        clientMessages = new QTextEdit(groupBox);
        clientMessages->setObjectName(QString::fromUtf8("clientMessages"));
        clientMessages->setGeometry(QRect(10, 30, 570, 360));
        clientMessages->setMinimumSize(QSize(570, 360));
        clientMessages->setMaximumSize(QSize(570, 360));
        clientMessages->setAcceptDrops(false);
        clientMessages->setFrameShape(QFrame::StyledPanel);
        clientMessages->setFrameShadow(QFrame::Plain);
        clientMessages->setReadOnly(true);

        verticalLayout_2->addWidget(groupBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        connectButton = new QPushButton(centralwidget);
        connectButton->setObjectName(QString::fromUtf8("connectButton"));

        verticalLayout->addWidget(connectButton);

        shutdownButton = new QPushButton(centralwidget);
        shutdownButton->setObjectName(QString::fromUtf8("shutdownButton"));

        verticalLayout->addWidget(shutdownButton);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout_2);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(580, 490));
        groupBox_2->setMaximumSize(QSize(580, 490));
        groupBox_2->setFlat(true);
        serverMessages = new QTextEdit(groupBox_2);
        serverMessages->setObjectName(QString::fromUtf8("serverMessages"));
        serverMessages->setGeometry(QRect(10, 30, 560, 450));
        serverMessages->setMinimumSize(QSize(560, 450));
        serverMessages->setMaximumSize(QSize(560, 450));
        serverMessages->setFrameShape(QFrame::StyledPanel);
        serverMessages->setFrameShadow(QFrame::Plain);
        serverMessages->setReadOnly(true);

        horizontalLayout_2->addWidget(groupBox_2);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "DTLS client", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "DTLS info messages:", nullptr));
        connectButton->setText(QApplication::translate("MainWindow", "Connect ...", nullptr));
        shutdownButton->setText(QApplication::translate("MainWindow", "Shutdown connections", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Received datagrams:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
