#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 주어진 포인트에 대해 특정 조건을 만족하는 값을 반환하는 함수
int solution(int point) {
    if (point < 1000)
        return 0; // 포인트가 1000 미만이면 0을 반환
    return point / 100 * 100; // 그 외의 경우, 포인트를 100으로 나눈 몫에 100을 곱하여 반환
}

int main() {
    // 예제 입력
    int point = 2323;

    // solution 함수 호출 및 결과 출력
    int ret = solution(point);
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}