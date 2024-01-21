#include <QRegularExpression>
#include "calculator.h"
#include "./ui_calculator.h"
#include <cmath>
#include <iostream>

using namespace std;

double calcValue = 0.0;
bool divTrigger = false;
bool multTrigger = false;
bool subTrigger = false;
bool addTrigger = false;
bool powTrigger = false;
QRegularExpression regChangeSign("[-]?[0-9.]*");
QRegularExpression regIsNumber("^[-]?[0-9]*\\.?[0-9]*$");

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);

    ui->ResultDisp->setText(QString::number(calcValue));

    QPushButton *numButtons[10];
    for(int i = 0; i < 10; i++) {
        QString buttonName = "Button" + QString::number(i);
        numButtons[i] = Calculator::findChild<QPushButton *>(buttonName);
        connect(numButtons[i], SIGNAL(released()), this,
                SLOT(NumPressed()));
    }

    QPushButton *simpleMathButtons[5];
    for(int i = 0; i < 5; i++) {
        QString buttonName = "SMath" + QString::number(i + 1);
        simpleMathButtons[i] = Calculator::findChild<QPushButton *>(buttonName);
        connect(simpleMathButtons[i], SIGNAL(released()), this,
                SLOT(SimpleMathButton()));
    }

    connect(ui->Point, SIGNAL(released()), this,
            SLOT(PointPressed()));
    connect(ui->Root, SIGNAL(released()), this,
            SLOT(RootButton()));
    connect(ui->PrimeCheck, SIGNAL(released()), this,
            SLOT(PrimeButton()));
    connect(ui->Equals, SIGNAL(released()), this,
            SLOT(EqualButton()));
    connect(ui->Sign, SIGNAL(released()), this,
            SLOT(ChangeSign()));
    connect(ui->Clear, SIGNAL(released()), this,
            SLOT(ClearButton()));
}

Calculator::~Calculator()
{
    delete ui;
}

bool isPrime(const int number) {
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

void Calculator::NumPressed() {
    QPushButton *button = (QPushButton *)sender();
    QString buttonValue = button->text();
    QString displayValue = ui->ResultDisp->text();
    if (regIsNumber.match(displayValue).hasMatch()) {
        if (displayValue == "0") {
            ui->ResultDisp->setText(buttonValue);
        } else {
            QString newValue = displayValue + buttonValue;
            ui->ResultDisp->setText(newValue);
        }
    } else {
        ui->ResultDisp->setText(buttonValue);
    }
}

void Calculator::PointPressed() {
    QString displayValue = ui->ResultDisp->text();
    if (regIsNumber.match(displayValue).hasMatch()) {
        ui->ResultDisp->setText(displayValue + ".");
    }
}

void Calculator::ClearButton() {
    divTrigger = false;
    multTrigger = false;
    subTrigger = false;
    addTrigger = false;
    powTrigger = false;
    calcValue = 0.0;
    ui->ResultDisp->setText(QString::number(calcValue));
}

void Calculator::SimpleMathButton() {
    divTrigger = false;
    multTrigger = false;
    subTrigger = false;
    addTrigger = false;
    powTrigger = false;

    QPushButton *button = (QPushButton *)sender();
    QString buttonOperator = button->text();
    if (QString::compare(buttonOperator, "÷", Qt::CaseInsensitive) == 0) {
        divTrigger = true;
    } else if (QString::compare(buttonOperator, "×", Qt::CaseInsensitive) == 0) {
        multTrigger = true;
    } else if (QString::compare(buttonOperator, "+", Qt::CaseInsensitive) == 0) {
        addTrigger = true;
    } else if (QString::compare(buttonOperator, "-", Qt::CaseInsensitive) == 0) {
        subTrigger = true;
    } else if (QString::compare(buttonOperator, "xⁿ", Qt::CaseInsensitive) == 0) {
        powTrigger = true;
        buttonOperator = "^";
    }

    QString displayValue = ui->ResultDisp->text();
    if (regIsNumber.match(displayValue).hasMatch()) {
        calcValue = displayValue.toDouble();
    }
    ui->ResultDisp->setText(QString::number(calcValue) + buttonOperator);
}

void Calculator::RootButton() {
    QString displayValue = ui->ResultDisp->text();
    if (regIsNumber.match(displayValue).hasMatch()) {
        calcValue = displayValue.toDouble();
    }
    double result = pow(calcValue, 0.5);
    ui->ResultDisp->setText(QString::number(result, 'g', 16));

    divTrigger = false;
    multTrigger = false;
    subTrigger = false;
    addTrigger = false;
    powTrigger = false;
}

void Calculator::PrimeButton() {
    if (isPrime(ui->ResultDisp->text().toInt())) {
        ui->ResultDisp->setText("Yes");
    } else {
        ui->ResultDisp->setText("No");
    }

    divTrigger = false;
    multTrigger = false;
    subTrigger = false;
    addTrigger = false;
    powTrigger = false;
    calcValue = 0.0;
}

void Calculator::EqualButton() {
    double result = 0.0;
    QString displayValue = ui->ResultDisp->text();
    double dblDisplayValue = displayValue.toDouble();
    if (divTrigger || multTrigger || subTrigger || addTrigger || powTrigger) {
        if(divTrigger){
            result = calcValue / dblDisplayValue;
        } else if(multTrigger){
            result = calcValue * dblDisplayValue;
        } else if(subTrigger){
            result = calcValue - dblDisplayValue;
        } else if(addTrigger){
            result = calcValue + dblDisplayValue;
        } else {
            result = pow(calcValue, dblDisplayValue);
        }
    }
    ui->ResultDisp->setText(QString::number(result, 'g', 16));
    divTrigger = false;
    multTrigger = false;
    subTrigger = false;
    addTrigger = false;
    powTrigger = false;
}

void Calculator::ChangeSign() {
    QString displayValue = ui->ResultDisp->text();
    if (regChangeSign.match(displayValue).hasMatch()) {
        double dblDisplayValue = displayValue.toDouble();
        double dblDisplayValueSign = -1 * dblDisplayValue;
        ui->ResultDisp->setText(QString::number(dblDisplayValueSign));
    }
}
