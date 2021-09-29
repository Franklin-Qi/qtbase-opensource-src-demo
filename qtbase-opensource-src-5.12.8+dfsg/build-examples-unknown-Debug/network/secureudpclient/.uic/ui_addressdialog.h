/********************************************************************************
** Form generated from reading UI file 'addressdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRESSDIALOG_H
#define UI_ADDRESSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddressDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *addressSelector;
    QLabel *label_2;
    QLineEdit *portSelector;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddressDialog)
    {
        if (AddressDialog->objectName().isEmpty())
            AddressDialog->setObjectName(QString::fromUtf8("AddressDialog"));
        AddressDialog->resize(548, 143);
        verticalLayout = new QVBoxLayout(AddressDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(AddressDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        addressSelector = new QComboBox(AddressDialog);
        addressSelector->setObjectName(QString::fromUtf8("addressSelector"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addressSelector->sizePolicy().hasHeightForWidth());
        addressSelector->setSizePolicy(sizePolicy);
        addressSelector->setMinimumSize(QSize(320, 0));
        addressSelector->setMaximumSize(QSize(320, 16777215));
        addressSelector->setEditable(true);
        addressSelector->setFrame(false);

        gridLayout->addWidget(addressSelector, 0, 1, 1, 1);

        label_2 = new QLabel(AddressDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        portSelector = new QLineEdit(AddressDialog);
        portSelector->setObjectName(QString::fromUtf8("portSelector"));
        sizePolicy.setHeightForWidth(portSelector->sizePolicy().hasHeightForWidth());
        portSelector->setSizePolicy(sizePolicy);
        portSelector->setMinimumSize(QSize(320, 0));
        portSelector->setMaximumSize(QSize(320, 16777215));

        gridLayout->addWidget(portSelector, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        buttonBox = new QDialogButtonBox(AddressDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AddressDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddressDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddressDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddressDialog);
    } // setupUi

    void retranslateUi(QDialog *AddressDialog)
    {
        AddressDialog->setWindowTitle(QApplication::translate("AddressDialog", "Host info", nullptr));
        label->setText(QApplication::translate("AddressDialog", "Host name (server's address):", nullptr));
        label_2->setText(QApplication::translate("AddressDialog", "Server port:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddressDialog: public Ui_AddressDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRESSDIALOG_H
