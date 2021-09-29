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
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QGroupBox *infoBox;
    QTextEdit *serverInfo;
    QGroupBox *groupBox;
    QTextEdit *messages;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *startButton;
    QPushButton *quitButton;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1090, 670);
        MainWindow->setMinimumSize(QSize(1090, 670));
        MainWindow->setMaximumSize(QSize(1090, 670));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 1050, 576));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        infoBox = new QGroupBox(layoutWidget);
        infoBox->setObjectName(QString::fromUtf8("infoBox"));
        infoBox->setMinimumSize(QSize(520, 540));
        infoBox->setMaximumSize(QSize(520, 540));
        infoBox->setFlat(true);
        serverInfo = new QTextEdit(infoBox);
        serverInfo->setObjectName(QString::fromUtf8("serverInfo"));
        serverInfo->setGeometry(QRect(10, 30, 500, 500));
        serverInfo->setMinimumSize(QSize(500, 500));
        serverInfo->setMaximumSize(QSize(500, 500));
        serverInfo->setReadOnly(true);

        horizontalLayout->addWidget(infoBox);

        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(520, 540));
        groupBox->setMaximumSize(QSize(520, 540));
        groupBox->setFlat(true);
        messages = new QTextEdit(groupBox);
        messages->setObjectName(QString::fromUtf8("messages"));
        messages->setGeometry(QRect(10, 30, 500, 500));
        messages->setMinimumSize(QSize(500, 500));
        messages->setMaximumSize(QSize(500, 500));
        messages->setReadOnly(true);

        horizontalLayout->addWidget(groupBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        startButton = new QPushButton(layoutWidget);
        startButton->setObjectName(QString::fromUtf8("startButton"));

        horizontalLayout_2->addWidget(startButton);

        quitButton = new QPushButton(layoutWidget);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));

        horizontalLayout_2->addWidget(quitButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1090, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "DTLS server", nullptr));
        infoBox->setTitle(QApplication::translate("MainWindow", "Dtls server info:", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Received messages:", nullptr));
        startButton->setText(QApplication::translate("MainWindow", "Start listening", nullptr));
        quitButton->setText(QApplication::translate("MainWindow", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
