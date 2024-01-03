#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �� ������ ����(���밪)�� ����ϴ� �Լ�
int func_a(int number1, int number2) {
    int ret = 0;

    if (number1 > number2)
        ret = number1 - number2;
    else
        ret = number2 - number1;

    return ret;
}

// ������ �ڸ����� ����ϴ� �Լ�
int func_b(int number) {
    int ret = 0;

    while (number != 0) {
        number = number / 10;
        ret++;
    }

    return ret;
}

// ���ڸ� ����� ��ȯ�ϴ� �Լ�
int func_c(int number, int digit) {
    int ret = 0;

    for (int i = 0; i < digit; i++) {
        int temp = number % 10;
        number = number / 10;
        ret = ret * 10 + temp;
    }

    return ret;
}

// �־��� ���ڿ� ������ ���� ���� ���̸� ����ϴ� �Լ�
int solution(int number) {
    int answer = 0;

    // ������ �ڸ��� ���
    int digit = func_b(number);

    // ���ڸ� ����� ����
    int convert_number = func_c(number, digit);

    // �� ���� ���� ����(���밪) ���
    answer = func_a(number, convert_number);

    return answer;
}

int main() {
    // ù ��° �׽�Ʈ ���̽�
    int number1 = 120;
    int ret1 = solution(number1);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret1);

    // �� ��° �׽�Ʈ ���̽�
    int number2 = 23;
    int ret2 = solution(number2);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret2);

    return 0;
}
