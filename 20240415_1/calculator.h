#include <iostream>
#include <string>
using namespace std;

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
