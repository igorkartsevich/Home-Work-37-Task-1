#pragma once

#include <iostream>
#include <string>
#include <QMainWindow>
#include <QString>
#include "ui_calculator.h"

class Calculator : public QMainWindow {
    Q_OBJECT

public:
    Calculator(QWidget *parent = Q_NULLPTR);

public slots:
    void clear();
    void add();
    void sub();
    void mult();
    void div();

private:
    Ui::CalculatorClass ui;
    void calculate(char simbol);
};
