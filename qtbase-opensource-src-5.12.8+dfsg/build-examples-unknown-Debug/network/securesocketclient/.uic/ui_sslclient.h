/********************************************************************************
** Form generated from reading UI file 'sslclient.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SSLCLIENT_H
#define UI_SSLCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout1;
    QLabel *hostNameLabel;
    QLineEdit *hostNameEdit;
    QLabel *portLabel;
    QSpinBox *portBox;
    QLabel *label;
    QPushButton *connectButton;
    QHBoxLayout *hboxLayout;
    QLabel *cipherText;
    QLabel *cipherLabel;
    QTextEdit *sessionOutput;
    QHBoxLayout *hboxLayout1;
    QLabel *sessionInputLabel;
    QLineEdit *sessionInput;
    QPushButton *sendButton;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(343, 320);
        Form->setMinimumSize(QSize(343, 320));
        gridLayout = new QGridLayout(Form);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout1 = new QGridLayout();
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        hostNameLabel = new QLabel(Form);
        hostNameLabel->setObjectName(QString::fromUtf8("hostNameLabel"));

        gridLayout1->addWidget(hostNameLabel, 0, 0, 1, 1);

        hostNameEdit = new QLineEdit(Form);
        hostNameEdit->setObjectName(QString::fromUtf8("hostNameEdit"));

        gridLayout1->addWidget(hostNameEdit, 0, 1, 1, 1);

        portLabel = new QLabel(Form);
        portLabel->setObjectName(QString::fromUtf8("portLabel"));

        gridLayout1->addWidget(portLabel, 1, 0, 1, 1);

        portBox = new QSpinBox(Form);
        portBox->setObjectName(QString::fromUtf8("portBox"));
        portBox->setMinimum(1);
        portBox->setMaximum(65535);
        portBox->setValue(443);

        gridLayout1->addWidget(portBox, 1, 1, 1, 1);


        gridLayout->addLayout(gridLayout1, 0, 0, 1, 2);

        label = new QLabel(Form);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        connectButton = new QPushButton(Form);
        connectButton->setObjectName(QString::fromUtf8("connectButton"));
        connectButton->setEnabled(true);

        gridLayout->addWidget(connectButton, 1, 1, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        cipherText = new QLabel(Form);
        cipherText->setObjectName(QString::fromUtf8("cipherText"));
        cipherText->setWordWrap(true);

        hboxLayout->addWidget(cipherText);

        cipherLabel = new QLabel(Form);
        cipherLabel->setObjectName(QString::fromUtf8("cipherLabel"));
        cipherLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        cipherLabel->setWordWrap(true);

        hboxLayout->addWidget(cipherLabel);


        gridLayout->addLayout(hboxLayout, 2, 0, 1, 2);

        sessionOutput = new QTextEdit(Form);
        sessionOutput->setObjectName(QString::fromUtf8("sessionOutput"));
        sessionOutput->setEnabled(false);
        sessionOutput->setFocusPolicy(Qt::StrongFocus);
        sessionOutput->setReadOnly(true);

        gridLayout->addWidget(sessionOutput, 3, 0, 1, 2);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        sessionInputLabel = new QLabel(Form);
        sessionInputLabel->setObjectName(QString::fromUtf8("sessionInputLabel"));

        hboxLayout1->addWidget(sessionInputLabel);

        sessionInput = new QLineEdit(Form);
        sessionInput->setObjectName(QString::fromUtf8("sessionInput"));
        sessionInput->setEnabled(false);

        hboxLayout1->addWidget(sessionInput);

        sendButton = new QPushButton(Form);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setEnabled(false);
        sendButton->setFocusPolicy(Qt::TabFocus);

        hboxLayout1->addWidget(sendButton);


        gridLayout->addLayout(hboxLayout1, 4, 0, 1, 2);


        retranslateUi(Form);
        QObject::connect(hostNameEdit, SIGNAL(returnPressed()), connectButton, SLOT(animateClick()));
        QObject::connect(sessionInput, SIGNAL(returnPressed()), sendButton, SLOT(animateClick()));

        connectButton->setDefault(true);
        sendButton->setDefault(true);


        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Secure Socket Client", nullptr));
        hostNameLabel->setText(QApplication::translate("Form", "Host name:", nullptr));
        hostNameEdit->setText(QApplication::translate("Form", "www.qt.io", nullptr));
        portLabel->setText(QApplication::translate("Form", "Port:", nullptr));
        label->setText(QApplication::translate("Form", "Active session", nullptr));
        connectButton->setText(QApplication::translate("Form", "Connect to host", nullptr));
        cipherText->setText(QApplication::translate("Form", "Cryptographic Cipher:", nullptr));
        cipherLabel->setText(QApplication::translate("Form", "<none>", nullptr));
        sessionOutput->setHtml(QApplication::translate("Form", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif'; font-size:9pt;\"><br /></p></body></html>", nullptr));
        sessionInputLabel->setText(QApplication::translate("Form", "Input:", nullptr));
        sendButton->setText(QApplication::translate("Form", "&Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SSLCLIENT_H
