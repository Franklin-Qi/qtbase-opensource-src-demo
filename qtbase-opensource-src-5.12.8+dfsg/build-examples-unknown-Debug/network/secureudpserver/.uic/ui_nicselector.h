/********************************************************************************
** Form generated from reading UI file 'nicselector.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NICSELECTOR_H
#define UI_NICSELECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NicSelector
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *ipSelector;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *portSelector;
    QSpacerItem *verticalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NicSelector)
    {
        if (NicSelector->objectName().isEmpty())
            NicSelector->setObjectName(QString::fromUtf8("NicSelector"));
        NicSelector->resize(373, 213);
        verticalLayout_3 = new QVBoxLayout(NicSelector);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        label = new QLabel(NicSelector);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        ipSelector = new QComboBox(NicSelector);
        ipSelector->setObjectName(QString::fromUtf8("ipSelector"));
        ipSelector->setMinimumSize(QSize(250, 0));

        verticalLayout->addWidget(ipSelector);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        label_2 = new QLabel(NicSelector);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        portSelector = new QLineEdit(NicSelector);
        portSelector->setObjectName(QString::fromUtf8("portSelector"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(portSelector->sizePolicy().hasHeightForWidth());
        portSelector->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(portSelector);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);


        verticalLayout_3->addLayout(verticalLayout_2);

        buttonBox = new QDialogButtonBox(NicSelector);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(NicSelector);
        QObject::connect(buttonBox, SIGNAL(accepted()), NicSelector, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NicSelector, SLOT(reject()));

        QMetaObject::connectSlotsByName(NicSelector);
    } // setupUi

    void retranslateUi(QDialog *NicSelector)
    {
        NicSelector->setWindowTitle(QApplication::translate("NicSelector", "IP and port", nullptr));
        label->setText(QApplication::translate("NicSelector", "Listen on address:", nullptr));
        label_2->setText(QApplication::translate("NicSelector", "Port:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NicSelector: public Ui_NicSelector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NICSELECTOR_H
