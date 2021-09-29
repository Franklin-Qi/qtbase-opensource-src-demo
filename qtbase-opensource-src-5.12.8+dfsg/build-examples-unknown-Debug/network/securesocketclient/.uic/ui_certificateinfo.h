/********************************************************************************
** Form generated from reading UI file 'certificateinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CERTIFICATEINFO_H
#define UI_CERTIFICATEINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CertificateInfo
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *label;
    QComboBox *certificationPathView;
    QLabel *label_2;
    QListWidget *certificateInfoView;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CertificateInfo)
    {
        if (CertificateInfo->objectName().isEmpty())
            CertificateInfo->setObjectName(QString::fromUtf8("CertificateInfo"));
        CertificateInfo->resize(400, 397);
        vboxLayout = new QVBoxLayout(CertificateInfo);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        label = new QLabel(CertificateInfo);
        label->setObjectName(QString::fromUtf8("label"));

        vboxLayout->addWidget(label);

        certificationPathView = new QComboBox(CertificateInfo);
        certificationPathView->setObjectName(QString::fromUtf8("certificationPathView"));
        certificationPathView->setMinimumContentsLength(3);

        vboxLayout->addWidget(certificationPathView);

        label_2 = new QLabel(CertificateInfo);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        vboxLayout->addWidget(label_2);

        certificateInfoView = new QListWidget(CertificateInfo);
        certificateInfoView->setObjectName(QString::fromUtf8("certificateInfoView"));
        QFont font;
        font.setPointSize(10);
        certificateInfoView->setFont(font);
        certificateInfoView->setWordWrap(true);

        vboxLayout->addWidget(certificateInfoView);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        buttonBox = new QDialogButtonBox(CertificateInfo);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        hboxLayout->addWidget(buttonBox);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(CertificateInfo);
        QObject::connect(buttonBox, SIGNAL(clicked(QAbstractButton*)), CertificateInfo, SLOT(accept()));

        QMetaObject::connectSlotsByName(CertificateInfo);
    } // setupUi

    void retranslateUi(QDialog *CertificateInfo)
    {
        CertificateInfo->setWindowTitle(QApplication::translate("CertificateInfo", "Display Certificate Information", nullptr));
        label->setText(QApplication::translate("CertificateInfo", "Certification Path", nullptr));
        label_2->setText(QApplication::translate("CertificateInfo", "Certificate Information", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CertificateInfo: public Ui_CertificateInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CERTIFICATEINFO_H
