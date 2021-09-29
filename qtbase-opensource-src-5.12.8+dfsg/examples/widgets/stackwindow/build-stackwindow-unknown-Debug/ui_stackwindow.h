/********************************************************************************
** Form generated from reading UI file 'stackwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STACKWINDOW_H
#define UI_STACKWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StackWindow
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *StackWindow)
    {
        if (StackWindow->objectName().isEmpty())
            StackWindow->setObjectName(QString::fromUtf8("StackWindow"));
        StackWindow->resize(800, 600);
        centralwidget = new QWidget(StackWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        StackWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(StackWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        StackWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(StackWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        StackWindow->setStatusBar(statusbar);

        retranslateUi(StackWindow);

        QMetaObject::connectSlotsByName(StackWindow);
    } // setupUi

    void retranslateUi(QMainWindow *StackWindow)
    {
        StackWindow->setWindowTitle(QApplication::translate("StackWindow", "StackWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StackWindow: public Ui_StackWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STACKWINDOW_H
