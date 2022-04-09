#include "calculator.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Calculator calculator;
    calculator.show();
    return a.exec();
}
