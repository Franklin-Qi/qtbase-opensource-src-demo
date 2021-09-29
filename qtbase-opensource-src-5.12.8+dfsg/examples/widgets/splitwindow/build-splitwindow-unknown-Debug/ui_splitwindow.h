/********************************************************************************
** Form generated from reading UI file 'splitwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPLITWINDOW_H
#define UI_SPLITWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SplitWindow
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SplitWindow)
    {
        if (SplitWindow->objectName().isEmpty())
            SplitWindow->setObjectName(QString::fromUtf8("SplitWindow"));
        SplitWindow->resize(800, 600);
        centralwidget = new QWidget(SplitWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        SplitWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SplitWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        SplitWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(SplitWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SplitWindow->setStatusBar(statusbar);

        retranslateUi(SplitWindow);

        QMetaObject::connectSlotsByName(SplitWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SplitWindow)
    {
        SplitWindow->setWindowTitle(QApplication::translate("SplitWindow", "SplitWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SplitWindow: public Ui_SplitWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPLITWINDOW_H
