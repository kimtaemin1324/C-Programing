#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 주어진 속도와 자동차들의 속도를 비교하여 점수를 계산하는 함수
int solution(int speed, int cars[], int cars_len) {
    int answer = 0;

    // 각 자동차에 대해 주어진 속도 범위에 따라 점수를 부여
    for (int i = 0; i < cars_len; i++) {
        // 주어진 속도의 11/10보다 크거나 같고 12/10보다 작은 경우
        if (cars[i] >= speed * 11 / 10 && cars[i] < speed * 12 / 10)
            answer += 3;
        // 주어진 속도의 12/10보다 크거나 같고 13/10보다 작은 경우
        else if (cars[i] >= speed * 12 / 10 && cars[i] < speed * 13 / 10)
            answer += 5;
        // 주어진 속도의 13/10보다 큰 경우
        else if (cars[i] >= speed * 13 / 10)
            answer += 7;
    }

    return answer;
}

int main() {
    int speed = 100;
    int cars[] = { 110, 98, 125, 148, 120, 112, 89 };
    int cars_len = 7;

    // solution 함수를 호출하고 반환값을 출력
    int ret = solution(speed, cars, cars_len);
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);

    return 0;
}