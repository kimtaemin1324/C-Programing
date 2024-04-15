#include <iostream>
#include "calculator.h"

int main() {
    char inputOper;
    double inputX, inputY;
    char continueFlag;

    do {
        std::cout << "X 값을 입력하고, 연산자를 입력하고, Y 값을 입력하세요: ";
        std::cin >> inputX >> inputOper >> inputY;

        Calculator calc(inputX, inputOper, inputY);
        calc.calculate();
        calc.printResult();

        std::cout << "계속하려면 'C'를, 종료하려면 'Q'를 입력하세요: ";
        std::cin >> continueFlag;

        if (continueFlag == 'C') {
            continue;
        }
        else if (continueFlag == 'Q') {
            break;
        }
        else {
            std::cout << "유효하지 않은 입력입니다. 프로그램을 종료합니다..." << std::endl;
            break;
        }
    } while (true);

    return 0;
}