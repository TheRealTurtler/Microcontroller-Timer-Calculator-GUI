#pragma once

#include <QtWidgets/QMainWindow>
#include <QClipboard>
#include <QFontMetricsF>
#include <qfiledialog.h>
#include <qmessagebox.h>
#include <qtextstream.h>
#include "ui_MTC.h"

class MTC : public QMainWindow
{
    Q_OBJECT

public:
    explicit MTC(QWidget *parent = Q_NULLPTR);

private slots:
    void calculateTimerSettings();
    void calculateTargetFreq();
    void calculateTargetCycleTime();
    void displayTimerSettingsText();
    void copyAll();
    void resetSettings();
    void resetCalculation();
    void resetText();
    void resetAll();
    void exit();
    void about();
    void saveAs();

private:
    Ui::MTCClass ui;
    QClipboard* clipboard;

    bool calculated = false;

    int OCRnA = 0;
    bool CSn0 = false;
    bool CSn1 = false;
    bool CSn2 = false;

    double realFreq = 0.0;
    double realCycleTime = 0.0;
};
