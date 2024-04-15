#include <iostream>
#include "calculator.h"

int main() {
    char inputOper;
    double inputX, inputY;
    char continueFlag;

    do {
        std::cout << "X ���� �Է��ϰ�, �����ڸ� �Է��ϰ�, Y ���� �Է��ϼ���: ";
        std::cin >> inputX >> inputOper >> inputY;

        Calculator calc(inputX, inputOper, inputY);
        calc.calculate();
        calc.printResult();

        std::cout << "����Ϸ��� 'C'��, �����Ϸ��� 'Q'�� �Է��ϼ���: ";
        std::cin >> continueFlag;

        if (continueFlag == 'C') {
            continue;
        }
        else if (continueFlag == 'Q') {
            break;
        }
        else {
            std::cout << "��ȿ���� ���� �Է��Դϴ�. ���α׷��� �����մϴ�..." << std::endl;
            break;
        }
    } while (true);

    return 0;
}