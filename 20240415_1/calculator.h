#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
private:
    double x;
    char oper;
    double y;
    double sum;

public:
    Calculator(double X, char Oper, double Y);
    void calculate();
    void printResult();
};

#endif