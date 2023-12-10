#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 주어진 매개변수를 기반으로 솔루션을 계산하는 함수
int solution(int num_apple, int num_carrot, int k) {
    int answer = 0;

    // 조건에 따라 초기 답을 계산합니다.
    if (num_apple < 3 * num_carrot)
        answer = num_apple / 3;
    else
        answer = num_carrot;

    // 남은 사과와 당근을 업데이트합니다.
    num_apple -= 3 * answer;
    num_carrot -= answer;

    // 루프를 통해 k 값까지 계산을 수행합니다.
    for (int i = 0; k - (num_apple + num_carrot + i) > 0; i++)
        if (i % 4 == 0)
            answer--;

    // 최종적인 답을 반환합니다.
    return answer;
}

// 메인 함수
int main() {
    // 첫 번째 테스트 케이스
    int num_apple1 = 5;
    int num_carrot1 = 1;
    int k1 = 2;
    int ret1 = solution(num_apple1, num_carrot1, k1);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    // 두 번째 테스트 케이스
    int num_apple2 = 10;
    int num_carrot2 = 5;
    int k2 = 4;
    int ret2 = solution(num_apple2, num_carrot2, k2);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}