/********************************************************************************
** Form generated from reading UI file 'embeddeddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMBEDDEDDIALOG_H
#define UI_EMBEDDEDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_EmbeddedDialog
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *layoutDirection;
    QLabel *label_2;
    QFontComboBox *fontComboBox;
    QLabel *label_3;
    QComboBox *style;
    QLabel *label_4;
    QSlider *spacing;

    void setupUi(QDialog *EmbeddedDialog)
    {
        if (EmbeddedDialog->objectName().isEmpty())
            EmbeddedDialog->setObjectName(QString::fromUtf8("EmbeddedDialog"));
        EmbeddedDialog->resize(407, 134);
        formLayout = new QFormLayout(EmbeddedDialog);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(EmbeddedDialog);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        layoutDirection = new QComboBox(EmbeddedDialog);
        layoutDirection->addItem(QString());
        layoutDirection->addItem(QString());
        layoutDirection->setObjectName(QString::fromUtf8("layoutDirection"));

        formLayout->setWidget(0, QFormLayout::FieldRole, layoutDirection);

        label_2 = new QLabel(EmbeddedDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        fontComboBox = new QFontComboBox(EmbeddedDialog);
        fontComboBox->setObjectName(QString::fromUtf8("fontComboBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, fontComboBox);

        label_3 = new QLabel(EmbeddedDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        style = new QComboBox(EmbeddedDialog);
        style->setObjectName(QString::fromUtf8("style"));

        formLayout->setWidget(2, QFormLayout::FieldRole, style);

        label_4 = new QLabel(EmbeddedDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        spacing = new QSlider(EmbeddedDialog);
        spacing->setObjectName(QString::fromUtf8("spacing"));
        spacing->setOrientation(Qt::Horizontal);

        formLayout->setWidget(3, QFormLayout::FieldRole, spacing);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(layoutDirection);
        label_2->setBuddy(fontComboBox);
        label_3->setBuddy(style);
        label_4->setBuddy(spacing);
#endif // QT_NO_SHORTCUT

        retranslateUi(EmbeddedDialog);

        QMetaObject::connectSlotsByName(EmbeddedDialog);
    } // setupUi

    void retranslateUi(QDialog *EmbeddedDialog)
    {
        EmbeddedDialog->setWindowTitle(QApplication::translate("EmbeddedDialog", "Embedded Dialog", nullptr));
        label->setText(QApplication::translate("EmbeddedDialog", "Layout Direction:", nullptr));
        layoutDirection->setItemText(0, QApplication::translate("EmbeddedDialog", "Left to Right", nullptr));
        layoutDirection->setItemText(1, QApplication::translate("EmbeddedDialog", "Right to Left", nullptr));

        label_2->setText(QApplication::translate("EmbeddedDialog", "Select Font:", nullptr));
        label_3->setText(QApplication::translate("EmbeddedDialog", "Style:", nullptr));
        label_4->setText(QApplication::translate("EmbeddedDialog", "Layout spacing:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EmbeddedDialog: public Ui_EmbeddedDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMBEDDEDDIALOG_H
