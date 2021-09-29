/********************************************************************************
** Form generated from reading UI file 'bearermonitor_640_480.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BEARERMONITOR_640_480_H
#define UI_BEARERMONITOR_640_480_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BearerMonitor
{
public:
    QGridLayout *gridLayout;
    QGroupBox *systemState;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *onlineStateLayout;
    QLabel *onlineStateLabel;
    QLabel *onlineState;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_9;
    QTreeWidget *treeWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *configurationNameLayout;
    QLabel *configurationNameLabel;
    QLabel *configurationName;
    QHBoxLayout *configurationStateLayout;
    QLabel *configurationStateLabel;
    QLabel *configurationState;
    QHBoxLayout *configurationTypeLayout;
    QLabel *configurationTypeLabel;
    QLabel *configurationType;
    QHBoxLayout *configurationPurposeLayout;
    QLabel *configurationPurposeLabel;
    QLabel *configurationPurpose;
    QHBoxLayout *configurationIdentifierLayout;
    QLabel *configurationIdentifierLabel;
    QLabel *configurationIdentifier;
    QHBoxLayout *configurationRoamingLayout;
    QLabel *configurationRoamingLabel;
    QLabel *configurationRoaming;
    QHBoxLayout *configurationChildrenLayout;
    QLabel *configurationChildrenLabel;
    QLabel *configurationChildren;
    QGroupBox *nlaGroup;
    QHBoxLayout *horizontalLayout;
    QPushButton *registerButton;
    QPushButton *unregisterButton;
    QPushButton *newSessionButton;
    QPushButton *deleteSessionButton;
    QPushButton *scanButton;
    QProgressBar *progressBar;
    QSpacerItem *verticalSpacer;
    QGroupBox *sessionGroup;
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget;
    QWidget *tab;

    void setupUi(QWidget *BearerMonitor)
    {
        if (BearerMonitor->objectName().isEmpty())
            BearerMonitor->setObjectName(QString::fromUtf8("BearerMonitor"));
        BearerMonitor->resize(640, 515);
        gridLayout = new QGridLayout(BearerMonitor);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        systemState = new QGroupBox(BearerMonitor);
        systemState->setObjectName(QString::fromUtf8("systemState"));
        systemState->setFlat(true);
        verticalLayout_4 = new QVBoxLayout(systemState);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, -1, 0, 0);
        onlineStateLayout = new QHBoxLayout();
        onlineStateLayout->setObjectName(QString::fromUtf8("onlineStateLayout"));
        onlineStateLabel = new QLabel(systemState);
        onlineStateLabel->setObjectName(QString::fromUtf8("onlineStateLabel"));

        onlineStateLayout->addWidget(onlineStateLabel);

        onlineState = new QLabel(systemState);
        onlineState->setObjectName(QString::fromUtf8("onlineState"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(onlineState->sizePolicy().hasHeightForWidth());
        onlineState->setSizePolicy(sizePolicy);

        onlineStateLayout->addWidget(onlineState);


        verticalLayout_4->addLayout(onlineStateLayout);


        gridLayout->addWidget(systemState, 0, 0, 1, 1);

        groupBox = new QGroupBox(BearerMonitor);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFlat(true);
        horizontalLayout_9 = new QHBoxLayout(groupBox);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, -1, 0, 0);
        treeWidget = new QTreeWidget(groupBox);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->header()->setVisible(false);

        horizontalLayout_9->addWidget(treeWidget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        configurationNameLayout = new QHBoxLayout();
        configurationNameLayout->setObjectName(QString::fromUtf8("configurationNameLayout"));
        configurationNameLabel = new QLabel(groupBox);
        configurationNameLabel->setObjectName(QString::fromUtf8("configurationNameLabel"));

        configurationNameLayout->addWidget(configurationNameLabel);

        configurationName = new QLabel(groupBox);
        configurationName->setObjectName(QString::fromUtf8("configurationName"));
        sizePolicy.setHeightForWidth(configurationName->sizePolicy().hasHeightForWidth());
        configurationName->setSizePolicy(sizePolicy);

        configurationNameLayout->addWidget(configurationName);


        verticalLayout->addLayout(configurationNameLayout);

        configurationStateLayout = new QHBoxLayout();
        configurationStateLayout->setObjectName(QString::fromUtf8("configurationStateLayout"));
        configurationStateLabel = new QLabel(groupBox);
        configurationStateLabel->setObjectName(QString::fromUtf8("configurationStateLabel"));

        configurationStateLayout->addWidget(configurationStateLabel);

        configurationState = new QLabel(groupBox);
        configurationState->setObjectName(QString::fromUtf8("configurationState"));
        sizePolicy.setHeightForWidth(configurationState->sizePolicy().hasHeightForWidth());
        configurationState->setSizePolicy(sizePolicy);

        configurationStateLayout->addWidget(configurationState);


        verticalLayout->addLayout(configurationStateLayout);

        configurationTypeLayout = new QHBoxLayout();
        configurationTypeLayout->setObjectName(QString::fromUtf8("configurationTypeLayout"));
        configurationTypeLabel = new QLabel(groupBox);
        configurationTypeLabel->setObjectName(QString::fromUtf8("configurationTypeLabel"));

        configurationTypeLayout->addWidget(configurationTypeLabel);

        configurationType = new QLabel(groupBox);
        configurationType->setObjectName(QString::fromUtf8("configurationType"));
        sizePolicy.setHeightForWidth(configurationType->sizePolicy().hasHeightForWidth());
        configurationType->setSizePolicy(sizePolicy);

        configurationTypeLayout->addWidget(configurationType);


        verticalLayout->addLayout(configurationTypeLayout);

        configurationPurposeLayout = new QHBoxLayout();
        configurationPurposeLayout->setObjectName(QString::fromUtf8("configurationPurposeLayout"));
        configurationPurposeLabel = new QLabel(groupBox);
        configurationPurposeLabel->setObjectName(QString::fromUtf8("configurationPurposeLabel"));

        configurationPurposeLayout->addWidget(configurationPurposeLabel);

        configurationPurpose = new QLabel(groupBox);
        configurationPurpose->setObjectName(QString::fromUtf8("configurationPurpose"));
        sizePolicy.setHeightForWidth(configurationPurpose->sizePolicy().hasHeightForWidth());
        configurationPurpose->setSizePolicy(sizePolicy);

        configurationPurposeLayout->addWidget(configurationPurpose);


        verticalLayout->addLayout(configurationPurposeLayout);

        configurationIdentifierLayout = new QHBoxLayout();
        configurationIdentifierLayout->setObjectName(QString::fromUtf8("configurationIdentifierLayout"));
        configurationIdentifierLabel = new QLabel(groupBox);
        configurationIdentifierLabel->setObjectName(QString::fromUtf8("configurationIdentifierLabel"));

        configurationIdentifierLayout->addWidget(configurationIdentifierLabel);

        configurationIdentifier = new QLabel(groupBox);
        configurationIdentifier->setObjectName(QString::fromUtf8("configurationIdentifier"));
        sizePolicy.setHeightForWidth(configurationIdentifier->sizePolicy().hasHeightForWidth());
        configurationIdentifier->setSizePolicy(sizePolicy);

        configurationIdentifierLayout->addWidget(configurationIdentifier);


        verticalLayout->addLayout(configurationIdentifierLayout);

        configurationRoamingLayout = new QHBoxLayout();
        configurationRoamingLayout->setObjectName(QString::fromUtf8("configurationRoamingLayout"));
        configurationRoamingLabel = new QLabel(groupBox);
        configurationRoamingLabel->setObjectName(QString::fromUtf8("configurationRoamingLabel"));

        configurationRoamingLayout->addWidget(configurationRoamingLabel);

        configurationRoaming = new QLabel(groupBox);
        configurationRoaming->setObjectName(QString::fromUtf8("configurationRoaming"));
        sizePolicy.setHeightForWidth(configurationRoaming->sizePolicy().hasHeightForWidth());
        configurationRoaming->setSizePolicy(sizePolicy);

        configurationRoamingLayout->addWidget(configurationRoaming);


        verticalLayout->addLayout(configurationRoamingLayout);

        configurationChildrenLayout = new QHBoxLayout();
        configurationChildrenLayout->setObjectName(QString::fromUtf8("configurationChildrenLayout"));
        configurationChildrenLabel = new QLabel(groupBox);
        configurationChildrenLabel->setObjectName(QString::fromUtf8("configurationChildrenLabel"));

        configurationChildrenLayout->addWidget(configurationChildrenLabel);

        configurationChildren = new QLabel(groupBox);
        configurationChildren->setObjectName(QString::fromUtf8("configurationChildren"));
        sizePolicy.setHeightForWidth(configurationChildren->sizePolicy().hasHeightForWidth());
        configurationChildren->setSizePolicy(sizePolicy);

        configurationChildrenLayout->addWidget(configurationChildren);


        verticalLayout->addLayout(configurationChildrenLayout);

        nlaGroup = new QGroupBox(groupBox);
        nlaGroup->setObjectName(QString::fromUtf8("nlaGroup"));
        horizontalLayout = new QHBoxLayout(nlaGroup);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        registerButton = new QPushButton(nlaGroup);
        registerButton->setObjectName(QString::fromUtf8("registerButton"));

        horizontalLayout->addWidget(registerButton);

        unregisterButton = new QPushButton(nlaGroup);
        unregisterButton->setObjectName(QString::fromUtf8("unregisterButton"));

        horizontalLayout->addWidget(unregisterButton);


        verticalLayout->addWidget(nlaGroup);

        newSessionButton = new QPushButton(groupBox);
        newSessionButton->setObjectName(QString::fromUtf8("newSessionButton"));

        verticalLayout->addWidget(newSessionButton);

        deleteSessionButton = new QPushButton(groupBox);
        deleteSessionButton->setObjectName(QString::fromUtf8("deleteSessionButton"));

        verticalLayout->addWidget(deleteSessionButton);

        scanButton = new QPushButton(groupBox);
        scanButton->setObjectName(QString::fromUtf8("scanButton"));

        verticalLayout->addWidget(scanButton);

        progressBar = new QProgressBar(groupBox);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setMaximum(0);
        progressBar->setValue(-1);
        progressBar->setTextVisible(false);
        progressBar->setInvertedAppearance(false);

        verticalLayout->addWidget(progressBar);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_9->addLayout(verticalLayout);


        gridLayout->addWidget(groupBox, 1, 0, 1, 1);

        sessionGroup = new QGroupBox(BearerMonitor);
        sessionGroup->setObjectName(QString::fromUtf8("sessionGroup"));
        sessionGroup->setFlat(true);
        verticalLayout_3 = new QVBoxLayout(sessionGroup);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, -1, 0, 0);
        tabWidget = new QTabWidget(sessionGroup);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());

        verticalLayout_3->addWidget(tabWidget);


        gridLayout->addWidget(sessionGroup, 2, 0, 1, 1);


        retranslateUi(BearerMonitor);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(BearerMonitor);
    } // setupUi

    void retranslateUi(QWidget *BearerMonitor)
    {
        BearerMonitor->setWindowTitle(QApplication::translate("BearerMonitor", "BearerMonitor", nullptr));
        systemState->setTitle(QApplication::translate("BearerMonitor", "System State", nullptr));
        onlineStateLabel->setText(QApplication::translate("BearerMonitor", "Online State:", nullptr));
        onlineState->setText(QString());
        groupBox->setTitle(QApplication::translate("BearerMonitor", "Configurations", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("BearerMonitor", "1", nullptr));
        configurationNameLabel->setText(QApplication::translate("BearerMonitor", "Name:", nullptr));
        configurationName->setText(QString());
        configurationStateLabel->setText(QApplication::translate("BearerMonitor", "State:", nullptr));
        configurationState->setText(QString());
        configurationTypeLabel->setText(QApplication::translate("BearerMonitor", "Type:", nullptr));
        configurationType->setText(QApplication::translate("BearerMonitor", "Invalid", nullptr));
        configurationPurposeLabel->setText(QApplication::translate("BearerMonitor", "Purpose:", nullptr));
        configurationPurpose->setText(QApplication::translate("BearerMonitor", "Unknown", nullptr));
        configurationIdentifierLabel->setText(QApplication::translate("BearerMonitor", "Identifier:", nullptr));
        configurationIdentifier->setText(QString());
        configurationRoamingLabel->setText(QApplication::translate("BearerMonitor", "Roaming:", nullptr));
        configurationRoaming->setText(QString());
        configurationChildrenLabel->setText(QApplication::translate("BearerMonitor", "Children:", nullptr));
        configurationChildren->setText(QString());
        nlaGroup->setTitle(QApplication::translate("BearerMonitor", "Network Location Awareness", nullptr));
        registerButton->setText(QApplication::translate("BearerMonitor", "Register", nullptr));
        unregisterButton->setText(QApplication::translate("BearerMonitor", "Unregister", nullptr));
        newSessionButton->setText(QApplication::translate("BearerMonitor", "New Session", nullptr));
        deleteSessionButton->setText(QApplication::translate("BearerMonitor", "Delete Session", nullptr));
        scanButton->setText(QApplication::translate("BearerMonitor", "Scan", nullptr));
        progressBar->setFormat(QApplication::translate("BearerMonitor", "%p%", nullptr));
        sessionGroup->setTitle(QApplication::translate("BearerMonitor", "Sessions", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("BearerMonitor", "Session 1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BearerMonitor: public Ui_BearerMonitor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BEARERMONITOR_640_480_H
