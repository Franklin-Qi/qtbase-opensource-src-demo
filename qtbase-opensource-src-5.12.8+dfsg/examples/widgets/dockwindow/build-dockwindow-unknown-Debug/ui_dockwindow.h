/********************************************************************************
** Form generated from reading UI file 'dockwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCKWINDOW_H
#define UI_DOCKWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DockWindow
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DockWindow)
    {
        if (DockWindow->objectName().isEmpty())
            DockWindow->setObjectName(QString::fromUtf8("DockWindow"));
        DockWindow->resize(800, 600);
        centralwidget = new QWidget(DockWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        DockWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DockWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        DockWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(DockWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        DockWindow->setStatusBar(statusbar);

        retranslateUi(DockWindow);

        QMetaObject::connectSlotsByName(DockWindow);
    } // setupUi

    void retranslateUi(QMainWindow *DockWindow)
    {
        DockWindow->setWindowTitle(QApplication::translate("DockWindow", "DockWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DockWindow: public Ui_DockWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCKWINDOW_H
