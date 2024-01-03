#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 주어진 금액으로 음료수를 얼마나 많이 구매할 수 있는지 계산하는 함수
int solution(int money, int price, int n) {
    int answer = 0;

    // 초기 빈 병의 개수를 계산하여 answer에 저장
    int empty_bottle = answer = money / price;

    // 빈 병이 n개 이상인 경우에 계속해서 음료수를 받을 수 있도록 반복
    while (n <= empty_bottle) {
        empty_bottle = empty_bottle - n; // 빈 병에서 n개를 빼고
        answer++; // 구매한 음료수 개수를 증가시킴
        empty_bottle++; // 새로운 빈 병이 생김
    }

    return answer; // 최종적으로 구매한 음료수 개수를 반환
}

// 메인 함수
int main() {
    // 첫 번째 테스트 케이스
    int money1 = 8;
    int price1 = 2;
    int n1 = 4;
    int ret1 = solution(money1, price1, n1);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    // 두 번째 테스트 케이스
    int money2 = 6;
    int price2 = 2;
    int n2 = 2;
    int ret2 = solution(money2, price2, n2);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);

    return 0;
}
