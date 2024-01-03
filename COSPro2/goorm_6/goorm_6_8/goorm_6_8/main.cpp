#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 두 숫자의 차이(절대값)를 계산하는 함수
int func_a(int number1, int number2) {
    int ret = 0;

    if (number1 > number2)
        ret = number1 - number2;
    else
        ret = number2 - number1;

    return ret;
}

// 숫자의 자릿수를 계산하는 함수
int func_b(int number) {
    int ret = 0;

    while (number != 0) {
        number = number / 10;
        ret++;
    }

    return ret;
}

// 숫자를 뒤집어서 반환하는 함수
int func_c(int number, int digit) {
    int ret = 0;

    for (int i = 0; i < digit; i++) {
        int temp = number % 10;
        number = number / 10;
        ret = ret * 10 + temp;
    }

    return ret;
}

// 주어진 숫자와 뒤집은 숫자 간의 차이를 계산하는 함수
int solution(int number) {
    int answer = 0;

    // 숫자의 자릿수 계산
    int digit = func_b(number);

    // 숫자를 뒤집어서 저장
    int convert_number = func_c(number, digit);

    // 두 숫자 간의 차이(절대값) 계산
    answer = func_a(number, convert_number);

    return answer;
}

int main() {
    // 첫 번째 테스트 케이스
    int number1 = 120;
    int ret1 = solution(number1);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    // 두 번째 테스트 케이스
    int number2 = 23;
    int ret2 = solution(number2);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);

    return 0;
}
