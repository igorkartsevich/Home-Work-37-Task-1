#include "calculator.h"

Calculator::Calculator(QWidget *parent) : QMainWindow(parent)
{
    ui.setupUi(this);
    ui.lineEdit_number_1->setFocus();
}

void Calculator::clear() {
    ui.lineEdit_number_1->clear();
    ui.lineEdit_number_1->setFocus();
    ui.lineEdit_number_2->clear();
    ui.lineEdit_result->clear();
}

void Calculator::add() {
    calculate('+');
}

void Calculator::sub() {
    calculate('-');
}

void Calculator::mult() {
    calculate('*');
}

void Calculator::div() {
    calculate('/');
}

void Calculator::calculate(char simbol) {
    double number_1 = 0.0, number_2 = 0.0;
    bool is_succesfull = true;
    
    if (!ui.lineEdit_number_1->text().isEmpty()) {
        if (ui.lineEdit_number_1->text().toDouble()) number_1 = ui.lineEdit_number_1->text().toDouble();
        else is_succesfull = false;
    }
    
    if (!ui.lineEdit_number_2->text().isEmpty()) {
        if (ui.lineEdit_number_2->text().toDouble()) number_2 = ui.lineEdit_number_2->text().toDouble();
        else is_succesfull = false;
    }
    
    if (!is_succesfull) ui.lineEdit_result->setText("ERROR");
    else {
        switch (simbol) {
        case '+':
            ui.lineEdit_result->setText(QString::number(number_1 + number_2));
            break;
        case '-':
            ui.lineEdit_result->setText(QString::number(number_1 - number_2));
            break;
        case '*':
            ui.lineEdit_result->setText(QString::number(number_1 * number_2));
            break;
        case '/':
            ui.lineEdit_result->setText(QString::number(number_1 / number_2));
            break;
        default:
            break;
        }
    }

    return;
}