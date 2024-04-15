#include "calculator.h"
#include <iostream>

Calculator::Calculator(double X, char Oper, double Y) : x(X), oper(Oper), y(Y), sum(0) {}

void Calculator::calculate() {
    switch (oper) {
    case '+':
        sum = x + y;
        break;
    case '-':
        sum = x - y;
        break;
    case '*':
        sum = x * y;
        break;
    case '/':
        sum = x / y;
        break;
    default:
        std::cout << "유효하지 않은 연산자입니다!" << std::endl;
        break;
    }
}

void Calculator::printResult() {
    std::cout << x << " " << oper << " " << y << " = " << sum << std::endl;
}