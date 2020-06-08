#include "MTC.h"

MTC::MTC(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    ui.checkBox_CSn0->setAttribute(Qt::WA_TransparentForMouseEvents);
    ui.checkBox_CSn0->setFocusPolicy(Qt::NoFocus);
    ui.checkBox_CSn1->setAttribute(Qt::WA_TransparentForMouseEvents);
    ui.checkBox_CSn1->setFocusPolicy(Qt::NoFocus);
    ui.checkBox_CSn2->setAttribute(Qt::WA_TransparentForMouseEvents);
    ui.checkBox_CSn2->setFocusPolicy(Qt::NoFocus);
    
    connect(ui.actionReset, &QAction::triggered, this, &MTC::resetAll);
    connect(ui.actionSave_as, &QAction::triggered, this, &MTC::saveAs);
    connect(ui.actionExit, &QAction::triggered, this, &MTC::exit);
    connect(ui.actionCopy_Settings, &QAction::triggered, this, &MTC::copyAll);
    connect(ui.actionAbout, &QAction::triggered, this, &MTC::about);

    connect(ui.pushButton_calculate, &QPushButton::clicked, this, &MTC::calculateTimerSettings);
    connect(ui.pushButton_copyAll, &QPushButton::clicked, this, &MTC::copyAll);
    //connect(ui.doubleSpinBox_targetCycleTime, QOverload<double>::of(&QDoubleSpinBox::valueChanged), this, &MTC::calculateTargetFreq);
    //connect(ui.doubleSpinBox_targetFreq, QOverload<double>::of(&QDoubleSpinBox::valueChanged), this, &MTC::calculateTargetCycleTime);
    connect(ui.doubleSpinBox_targetCycleTime, SIGNAL(editingFinished()), this, SLOT(calculateTargetFreq()));
    connect(ui.doubleSpinBox_targetFreq, SIGNAL(editingFinished()), this, SLOT(calculateTargetCycleTime()));
    connect(ui.spinBox_timerNo, QOverload<int>::of(&QSpinBox::valueChanged), this, &MTC::displayTimerSettingsText);
    connect(ui.checkBox_description, &QCheckBox::stateChanged, this, &MTC::displayTimerSettingsText);

    clipboard = QGuiApplication::clipboard();
    
    ui.plainTextEdit_output->setTabStopDistance(QFontMetricsF(ui.plainTextEdit_output->font()).horizontalAdvance(' ') * 6);

    ui.actionCopy_Settings->setEnabled(false);
    ui.actionSave_as->setEnabled(false);
    ui.pushButton_copyAll->setEnabled(false);
}

void MTC::calculateTimerSettings()
{
    double compVal = 0.0;
    double timerDiv = 0.0;

    int cpuFreq = ui.comboBox_cpuFreq->currentText().toInt() * 1000000;
    int timerBits = ui.comboBox_timerBits->currentText().toInt();
    double targetFreq = ui.doubleSpinBox_targetFreq->value();
    double targetCycleTime = ui.doubleSpinBox_targetCycleTime->value();

    double compValMax = pow(2.0, static_cast<double>(timerBits)) - 1.0;
    double minFreq = cpuFreq / 1024.0 / compValMax;

    if (targetFreq < minFreq)
    {
        QString freqTooLow = "Frequency too low, has to be at least "
            +  QString("%L1").arg(minFreq, 0, 'f', 2, 0)
            + " Hz or at most "
            + QString("%L1").arg(1000 / minFreq, 0, 'f', 2, 0)
            + " ms cycle time!";

        statusBar()->showMessage(freqTooLow, 6000);
        resetCalculation();
        resetText();
        return;
    }

    if (targetFreq > cpuFreq)
    {
        QString freqTooHigh = "Frequency too high, has to be at most "
            + QString("%L1").arg(cpuFreq / 1000000, 0, 'f', 2, 0)
            + " MHz or at least "
            + QString("%L1").arg(1000 / cpuFreq, 0, 'f', 2, 0)
            + " ms cycle time!";

        statusBar()->showMessage(freqTooHigh, 6000);
        resetCalculation();
        resetText();
        return;
    }

    statusBar()->clearMessage();

    CSn0 = false;
    CSn1 = false;
    CSn2 = true;
    timerDiv = cpuFreq;
    compVal = cpuFreq / targetFreq;

    if (compVal > compValMax)
    {
        CSn0 = false;
        CSn1 = true;
        CSn2 = false;
        timerDiv = cpuFreq / 8.0;
        compVal = cpuFreq / 8.0 / targetFreq;

        if (compVal > compValMax)
        {
            CSn0 = false;
            CSn1 = true;
            CSn2 = true;
            timerDiv = cpuFreq / 32.0;
            compVal = cpuFreq / 32.0 / targetFreq;

            if (compVal > compValMax)
            {
                CSn0 = true;
                CSn1 = false;
                CSn2 = false;
                timerDiv = cpuFreq / 64.0;
                compVal = cpuFreq / 64.0 / targetFreq;

                if (compVal > compValMax)
                {
                    CSn0 = true;
                    CSn1 = false;
                    CSn2 = true;
                    timerDiv = cpuFreq / 128.0;
                    compVal = cpuFreq / 128.0 / targetFreq;

                    if (compVal > compValMax)
                    {
                        CSn0 = true;
                        CSn1 = true;
                        CSn2 = false;
                        timerDiv = cpuFreq / 256.0;
                        compVal = cpuFreq / 256.0 / targetFreq;

                        if (compVal > compValMax)
                        {
                            CSn0 = true;
                            CSn1 = true;
                            CSn2 = true;
                            timerDiv = cpuFreq / 1024.0;
                            compVal = cpuFreq / 1024.0 / targetFreq;
                        }
                    }
                }
            }
        }
    }

    OCRnA = round(compVal);
    realFreq = timerDiv / OCRnA;
    realCycleTime = 1000 / realFreq;

    calculated = true;
    statusBar()->showMessage("Calculation finished!", 4000);

    ui.actionCopy_Settings->setEnabled(true);
    ui.actionSave_as->setEnabled(true);
    ui.pushButton_copyAll->setEnabled(true);

    ui.spinBox_OCRnA->setValue(OCRnA);
    ui.checkBox_CSn0->setChecked(CSn0);
    ui.checkBox_CSn1->setChecked(CSn1);
    ui.checkBox_CSn2->setChecked(CSn2);
    ui.doubleSpinBox_realCycleTime->setValue(realCycleTime);
    ui.doubleSpinBox_realFreq->setValue(realFreq);

    displayTimerSettingsText();
}

void MTC::calculateTargetFreq()
{
    double targetCycleTime = ui.doubleSpinBox_targetCycleTime->value();

    ui.doubleSpinBox_targetFreq->setValue(1000.0 / targetCycleTime);
}

void MTC::calculateTargetCycleTime()
{
    double targetFreq = ui.doubleSpinBox_targetFreq->value();

    ui.doubleSpinBox_targetCycleTime->setValue(1000.0 / targetFreq);
}

void MTC::displayTimerSettingsText()
{
    if (!calculated)
    {
        return;
    }

    int timerNo = ui.spinBox_timerNo->value();
    QString timerNoStr = QString::number(timerNo, 10);

    QString description = QString("/************************************************************\n")
        + "Function:\tInitialize timer " + timerNoStr + "\n"
        + "Purpose:\tStarts timer " + timerNoStr + " with a frequency of " + QString("%L1").arg(realFreq, 0, 'f', 2, 0) + " Hz\n"
        + "\t\t\t-> " + QString("%L1").arg(realCycleTime, 0, 'f', 2, 0) + " ms cycle time\n"
        + "************************************************************/\n";

    QString initTimer = QString("static void InitTimer" + timerNoStr + "( void )\n")
        + "{\n"
        + "\tTCNT" + timerNoStr + " = 0;\n"
        + "\tOCR" + timerNoStr + "A = " + QString::number(OCRnA, 10) + ";\n"
        + "\tTCCR" + timerNoStr + "A = _BV( WGM" + timerNoStr + "1 );\n"
        + "\tTCCR" + timerNoStr + "B = ";

    // Conditional or Ternary Operator (?:) in C/C++
    // https://www.geeksforgeeks.org/conditional-or-ternary-operator-in-c-c/
    initTimer += CSn0 ? "_BV( CS" + timerNoStr + "0 )" : "";
    initTimer += (CSn0 && CSn1) ? " | " : "";
    initTimer += CSn1 ? "_BV( CS" + timerNoStr + "1 )" : "";
    initTimer += ((CSn0 && CSn2) || (CSn1 && CSn2)) ? " | " : "";
    initTimer += CSn2 ? "_BV( CS" + timerNoStr + "2 )" : "";

    initTimer += ";\n\tTIMSK" + timerNoStr + " = _BV( OCIE" + timerNoStr + "A );\n }";

    bool showDescription = ui.checkBox_description->isChecked();

    ui.plainTextEdit_output->setPlainText(showDescription ? (description + initTimer) : initTimer);
}

void MTC::copyAll()
{
    clipboard->setText(ui.plainTextEdit_output->toPlainText());
}

void MTC::resetSettings()
{
    ui.comboBox_cpuFreq->setCurrentIndex(0);
    ui.comboBox_timerBits->setCurrentIndex(0);
    ui.doubleSpinBox_targetCycleTime->setValue(0.0);
    ui.doubleSpinBox_targetFreq->setValue(0.0);
}

void MTC::resetCalculation()
{
    OCRnA = 0;
    CSn0 = false;
    CSn1 = false;
    CSn2 = false;
    realFreq = 0.0;
    realCycleTime = 0.0;
    ui.spinBox_OCRnA->setValue(0);
    ui.checkBox_CSn0->setChecked(false);
    ui.checkBox_CSn1->setChecked(false);
    ui.checkBox_CSn2->setChecked(false);
    ui.doubleSpinBox_realCycleTime->setValue(0.0);
    ui.doubleSpinBox_realFreq->setValue(0.0);
    calculated = false;
}

void MTC::resetText()
{
    ui.plainTextEdit_output->setPlainText("");

    ui.actionCopy_Settings->setEnabled(false);
    ui.actionSave_as->setEnabled(false);
    ui.pushButton_copyAll->setEnabled(false);
}

void MTC::resetAll()
{
    resetSettings();
    resetCalculation();
    resetText();

    ui.spinBox_timerNo->setValue(0);
    ui.checkBox_description->setChecked(true);
}

void MTC::exit()
{
    QApplication::quit();
}

void MTC::about()
{
    QString aboutText = QString("Microcontroller Timer Calcualtor\n\n")
        + "Created by:\n"
        + "Michael Diedler";

    QMessageBox::about(this, "About", aboutText);
}

void MTC::saveAs()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Save as", QDir::currentPath(), ("Text file (*.txt);;C-Source file (*.c)"));
    QFile file(fileName);

    if (!file.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this, "Warning", "Cannot save file: " + file.errorString());
        return;
    }

    QTextStream out(&file);
    QString text = ui.plainTextEdit_output->toPlainText();
    out << text;

    file.close();

    statusBar()->showMessage("File saved at " + fileName, 6000);
}
