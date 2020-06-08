/********************************************************************************
** Form generated from reading UI file 'MTC.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MTC_H
#define UI_MTC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MTCClass
{
public:
    QAction *actionExit;
    QAction *actionCopy_Settings;
    QAction *actionAbout;
    QAction *actionReset;
    QAction *actionSave_as;
    QWidget *centralWidget;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_8;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_2;
    QLabel *label_4;
    QComboBox *comboBox_cpuFreq;
    QComboBox *comboBox_timerBits;
    QLabel *label_3;
    QLabel *label_9;
    QLabel *label_6;
    QDoubleSpinBox *doubleSpinBox_targetCycleTime;
    QDoubleSpinBox *doubleSpinBox_targetFreq;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkBox_CSn0;
    QCheckBox *checkBox_CSn1;
    QCheckBox *checkBox_CSn2;
    QLabel *label_11;
    QDoubleSpinBox *doubleSpinBox_realCycleTime;
    QLabel *label_14;
    QLabel *label_12;
    QDoubleSpinBox *doubleSpinBox_realFreq;
    QLabel *label_13;
    QSpinBox *spinBox_OCRnA;
    QPushButton *pushButton_calculate;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QPlainTextEdit *plainTextEdit_output;
    QLabel *label_15;
    QSpinBox *spinBox_timerNo;
    QCheckBox *checkBox_description;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_copyAll;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuHelp;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MTCClass)
    {
        if (MTCClass->objectName().isEmpty())
            MTCClass->setObjectName(QString::fromUtf8("MTCClass"));
        MTCClass->resize(628, 480);
        actionExit = new QAction(MTCClass);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/MTC/icons/oxygen/16x16/actions/application-exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon);
        actionCopy_Settings = new QAction(MTCClass);
        actionCopy_Settings->setObjectName(QString::fromUtf8("actionCopy_Settings"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/MTC/icons/oxygen/16x16/actions/edit-copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy_Settings->setIcon(icon1);
        actionAbout = new QAction(MTCClass);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/MTC/icons/oxygen/16x16/actions/help-about.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon2);
        actionReset = new QAction(MTCClass);
        actionReset->setObjectName(QString::fromUtf8("actionReset"));
        actionSave_as = new QAction(MTCClass);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/MTC/icons/oxygen/16x16/actions/document-save-as.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_as->setIcon(icon3);
        centralWidget = new QWidget(MTCClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_4 = new QGridLayout(centralWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(16, 16));
        label_8->setMaximumSize(QSize(16, 16));

        gridLayout->addWidget(label_8, 3, 2, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(20, 16));
        label_5->setMaximumSize(QSize(20, 16));

        gridLayout->addWidget(label_5, 0, 2, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMaximumSize(QSize(84, 16));

        gridLayout->addWidget(label_7, 3, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(80, 16));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(82, 16));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        comboBox_cpuFreq = new QComboBox(groupBox);
        comboBox_cpuFreq->addItem(QString());
        comboBox_cpuFreq->addItem(QString());
        comboBox_cpuFreq->addItem(QString());
        comboBox_cpuFreq->addItem(QString());
        comboBox_cpuFreq->addItem(QString());
        comboBox_cpuFreq->setObjectName(QString::fromUtf8("comboBox_cpuFreq"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox_cpuFreq->sizePolicy().hasHeightForWidth());
        comboBox_cpuFreq->setSizePolicy(sizePolicy);
        comboBox_cpuFreq->setMinimumSize(QSize(41, 20));

        gridLayout->addWidget(comboBox_cpuFreq, 0, 1, 1, 1);

        comboBox_timerBits = new QComboBox(groupBox);
        comboBox_timerBits->addItem(QString());
        comboBox_timerBits->addItem(QString());
        comboBox_timerBits->setObjectName(QString::fromUtf8("comboBox_timerBits"));
        sizePolicy.setHeightForWidth(comboBox_timerBits->sizePolicy().hasHeightForWidth());
        comboBox_timerBits->setSizePolicy(sizePolicy);
        comboBox_timerBits->setMinimumSize(QSize(41, 20));

        gridLayout->addWidget(comboBox_timerBits, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(26, 16));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(16, 16));
        label_9->setMaximumSize(QSize(16, 16));

        gridLayout->addWidget(label_9, 1, 2, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(16, 16));
        label_6->setMaximumSize(QSize(16, 16));

        gridLayout->addWidget(label_6, 2, 2, 1, 1);

        doubleSpinBox_targetCycleTime = new QDoubleSpinBox(groupBox);
        doubleSpinBox_targetCycleTime->setObjectName(QString::fromUtf8("doubleSpinBox_targetCycleTime"));
        sizePolicy.setHeightForWidth(doubleSpinBox_targetCycleTime->sizePolicy().hasHeightForWidth());
        doubleSpinBox_targetCycleTime->setSizePolicy(sizePolicy);
        doubleSpinBox_targetCycleTime->setMinimumSize(QSize(91, 22));
        doubleSpinBox_targetCycleTime->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_targetCycleTime->setMaximum(99999999.989999994635582);

        gridLayout->addWidget(doubleSpinBox_targetCycleTime, 2, 1, 1, 1);

        doubleSpinBox_targetFreq = new QDoubleSpinBox(groupBox);
        doubleSpinBox_targetFreq->setObjectName(QString::fromUtf8("doubleSpinBox_targetFreq"));
        sizePolicy.setHeightForWidth(doubleSpinBox_targetFreq->sizePolicy().hasHeightForWidth());
        doubleSpinBox_targetFreq->setSizePolicy(sizePolicy);
        doubleSpinBox_targetFreq->setMinimumSize(QSize(91, 22));
        doubleSpinBox_targetFreq->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_targetFreq->setMaximum(99999999.989999994635582);

        gridLayout->addWidget(doubleSpinBox_targetFreq, 3, 1, 1, 1);


        gridLayout_4->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(111, 16));

        gridLayout_2->addWidget(label, 0, 0, 1, 2);

        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMinimumSize(QSize(47, 13));

        gridLayout_2->addWidget(label_10, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(55, 26, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 1, 1, 1);

        checkBox_CSn0 = new QCheckBox(groupBox_2);
        checkBox_CSn0->setObjectName(QString::fromUtf8("checkBox_CSn0"));
        sizePolicy.setHeightForWidth(checkBox_CSn0->sizePolicy().hasHeightForWidth());
        checkBox_CSn0->setSizePolicy(sizePolicy);
        checkBox_CSn0->setMinimumSize(QSize(51, 17));

        gridLayout_2->addWidget(checkBox_CSn0, 1, 2, 1, 1);

        checkBox_CSn1 = new QCheckBox(groupBox_2);
        checkBox_CSn1->setObjectName(QString::fromUtf8("checkBox_CSn1"));
        sizePolicy.setHeightForWidth(checkBox_CSn1->sizePolicy().hasHeightForWidth());
        checkBox_CSn1->setSizePolicy(sizePolicy);
        checkBox_CSn1->setMinimumSize(QSize(51, 17));

        gridLayout_2->addWidget(checkBox_CSn1, 1, 3, 1, 1);

        checkBox_CSn2 = new QCheckBox(groupBox_2);
        checkBox_CSn2->setObjectName(QString::fromUtf8("checkBox_CSn2"));
        checkBox_CSn2->setEnabled(true);
        sizePolicy.setHeightForWidth(checkBox_CSn2->sizePolicy().hasHeightForWidth());
        checkBox_CSn2->setSizePolicy(sizePolicy);
        checkBox_CSn2->setMinimumSize(QSize(51, 17));

        gridLayout_2->addWidget(checkBox_CSn2, 1, 4, 1, 2);

        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMinimumSize(QSize(71, 16));

        gridLayout_2->addWidget(label_11, 2, 0, 1, 2);

        doubleSpinBox_realCycleTime = new QDoubleSpinBox(groupBox_2);
        doubleSpinBox_realCycleTime->setObjectName(QString::fromUtf8("doubleSpinBox_realCycleTime"));
        sizePolicy.setHeightForWidth(doubleSpinBox_realCycleTime->sizePolicy().hasHeightForWidth());
        doubleSpinBox_realCycleTime->setSizePolicy(sizePolicy);
        doubleSpinBox_realCycleTime->setMinimumSize(QSize(91, 22));
        doubleSpinBox_realCycleTime->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_realCycleTime->setReadOnly(true);
        doubleSpinBox_realCycleTime->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_realCycleTime->setMaximum(99999999.989999994635582);

        gridLayout_2->addWidget(doubleSpinBox_realCycleTime, 2, 2, 1, 3);

        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setMinimumSize(QSize(16, 16));

        gridLayout_2->addWidget(label_14, 2, 5, 1, 1);

        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMinimumSize(QSize(81, 16));

        gridLayout_2->addWidget(label_12, 3, 0, 1, 2);

        doubleSpinBox_realFreq = new QDoubleSpinBox(groupBox_2);
        doubleSpinBox_realFreq->setObjectName(QString::fromUtf8("doubleSpinBox_realFreq"));
        sizePolicy.setHeightForWidth(doubleSpinBox_realFreq->sizePolicy().hasHeightForWidth());
        doubleSpinBox_realFreq->setSizePolicy(sizePolicy);
        doubleSpinBox_realFreq->setMinimumSize(QSize(91, 22));
        doubleSpinBox_realFreq->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_realFreq->setReadOnly(true);
        doubleSpinBox_realFreq->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_realFreq->setMaximum(99999999.989999994635582);

        gridLayout_2->addWidget(doubleSpinBox_realFreq, 3, 2, 1, 3);

        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMinimumSize(QSize(16, 16));

        gridLayout_2->addWidget(label_13, 3, 5, 1, 1);

        spinBox_OCRnA = new QSpinBox(groupBox_2);
        spinBox_OCRnA->setObjectName(QString::fromUtf8("spinBox_OCRnA"));
        spinBox_OCRnA->setMinimumSize(QSize(91, 22));
        spinBox_OCRnA->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBox_OCRnA->setReadOnly(true);
        spinBox_OCRnA->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_OCRnA->setMaximum(65565);

        gridLayout_2->addWidget(spinBox_OCRnA, 0, 2, 1, 3);


        gridLayout_4->addWidget(groupBox_2, 0, 1, 1, 1);

        pushButton_calculate = new QPushButton(centralWidget);
        pushButton_calculate->setObjectName(QString::fromUtf8("pushButton_calculate"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_calculate->sizePolicy().hasHeightForWidth());
        pushButton_calculate->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(pushButton_calculate, 1, 0, 1, 2);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        plainTextEdit_output = new QPlainTextEdit(groupBox_3);
        plainTextEdit_output->setObjectName(QString::fromUtf8("plainTextEdit_output"));
        plainTextEdit_output->setReadOnly(true);

        gridLayout_3->addWidget(plainTextEdit_output, 0, 0, 5, 1);

        label_15 = new QLabel(groupBox_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_3->addWidget(label_15, 0, 1, 1, 1);

        spinBox_timerNo = new QSpinBox(groupBox_3);
        spinBox_timerNo->setObjectName(QString::fromUtf8("spinBox_timerNo"));
        spinBox_timerNo->setMinimumSize(QSize(51, 22));
        spinBox_timerNo->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBox_timerNo->setReadOnly(false);
        spinBox_timerNo->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        spinBox_timerNo->setMaximum(9);

        gridLayout_3->addWidget(spinBox_timerNo, 1, 1, 1, 1);

        checkBox_description = new QCheckBox(groupBox_3);
        checkBox_description->setObjectName(QString::fromUtf8("checkBox_description"));
        checkBox_description->setMinimumSize(QSize(71, 17));
        checkBox_description->setChecked(true);

        gridLayout_3->addWidget(checkBox_description, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 87, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 3, 1, 1, 1);

        pushButton_copyAll = new QPushButton(groupBox_3);
        pushButton_copyAll->setObjectName(QString::fromUtf8("pushButton_copyAll"));
        pushButton_copyAll->setMinimumSize(QSize(51, 23));
        pushButton_copyAll->setMaximumSize(QSize(131, 23));

        gridLayout_3->addWidget(pushButton_copyAll, 4, 1, 1, 1);


        gridLayout_4->addWidget(groupBox_3, 2, 0, 1, 2);

        MTCClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MTCClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 628, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MTCClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(MTCClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MTCClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionSave_as);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionCopy_Settings);
        menuEdit->addSeparator();
        menuEdit->addAction(actionReset);
        menuHelp->addAction(actionAbout);

        retranslateUi(MTCClass);

        QMetaObject::connectSlotsByName(MTCClass);
    } // setupUi

    void retranslateUi(QMainWindow *MTCClass)
    {
        MTCClass->setWindowTitle(QApplication::translate("MTCClass", "MTC", nullptr));
        actionExit->setText(QApplication::translate("MTCClass", "Exit", nullptr));
        actionCopy_Settings->setText(QApplication::translate("MTCClass", "Copy Settings", nullptr));
        actionAbout->setText(QApplication::translate("MTCClass", "About", nullptr));
        actionReset->setText(QApplication::translate("MTCClass", "Reset", nullptr));
        actionSave_as->setText(QApplication::translate("MTCClass", "Save as", nullptr));
        groupBox->setTitle(QApplication::translate("MTCClass", "Settings", nullptr));
        label_8->setText(QApplication::translate("MTCClass", "Hz", nullptr));
        label_5->setText(QApplication::translate("MTCClass", "MHz", nullptr));
        label_7->setText(QApplication::translate("MTCClass", "Target frequency", nullptr));
        label_2->setText(QApplication::translate("MTCClass", "Processor Speed", nullptr));
        label_4->setText(QApplication::translate("MTCClass", "Target cycle time", nullptr));
        comboBox_cpuFreq->setItemText(0, QApplication::translate("MTCClass", "16", nullptr));
        comboBox_cpuFreq->setItemText(1, QApplication::translate("MTCClass", "8", nullptr));
        comboBox_cpuFreq->setItemText(2, QApplication::translate("MTCClass", "4", nullptr));
        comboBox_cpuFreq->setItemText(3, QApplication::translate("MTCClass", "2", nullptr));
        comboBox_cpuFreq->setItemText(4, QApplication::translate("MTCClass", "1", nullptr));

        comboBox_timerBits->setItemText(0, QApplication::translate("MTCClass", "16", nullptr));
        comboBox_timerBits->setItemText(1, QApplication::translate("MTCClass", "8", nullptr));

        label_3->setText(QApplication::translate("MTCClass", "Timer", nullptr));
        label_9->setText(QApplication::translate("MTCClass", "Bit", nullptr));
        label_6->setText(QApplication::translate("MTCClass", "ms", nullptr));
        groupBox_2->setTitle(QApplication::translate("MTCClass", "Calculation", nullptr));
        label->setText(QApplication::translate("MTCClass", "OCRnA compare value", nullptr));
        label_10->setText(QApplication::translate("MTCClass", "Prescaler", nullptr));
        checkBox_CSn0->setText(QApplication::translate("MTCClass", "CSn0", nullptr));
        checkBox_CSn1->setText(QApplication::translate("MTCClass", "CSn1", nullptr));
        checkBox_CSn2->setText(QApplication::translate("MTCClass", "CSn2", nullptr));
        label_11->setText(QApplication::translate("MTCClass", "Real cycle time", nullptr));
        label_14->setText(QApplication::translate("MTCClass", "ms", nullptr));
        label_12->setText(QApplication::translate("MTCClass", "Real frequency", nullptr));
        label_13->setText(QApplication::translate("MTCClass", "Hz", nullptr));
        pushButton_calculate->setText(QApplication::translate("MTCClass", "Calculate", nullptr));
        groupBox_3->setTitle(QApplication::translate("MTCClass", "Copy and Paste", nullptr));
        label_15->setText(QApplication::translate("MTCClass", "Timer No.", nullptr));
        checkBox_description->setText(QApplication::translate("MTCClass", "Description", nullptr));
        pushButton_copyAll->setText(QApplication::translate("MTCClass", "Copy All", nullptr));
        menuFile->setTitle(QApplication::translate("MTCClass", "File", nullptr));
        menuEdit->setTitle(QApplication::translate("MTCClass", "Edit", nullptr));
        menuHelp->setTitle(QApplication::translate("MTCClass", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MTCClass: public Ui_MTCClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MTC_H
