#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 전기 사용량에 따라 전기 요금을 계산하는 함수
int solution(int usage) {
    int answer = 0;

    // 전기 사용량이 30 이상인 경우
    if (usage > 30)
        answer = 20 * 430 + 10 * 570 + (usage - 30) * 840;
    // 전기 사용량이 20 이상인 경우
    else if (usage > 20)
        answer = 20 * 430 + (usage - 20) * 570;
    // 전기 사용량이 20 이하인 경우
    else
        answer = usage * 430;

    return answer;
}

int main() {
    // 전기 사용량
    int usage = 35;

    // solution 함수를 호출하고 반환값을 출력
    int ret = solution(usage);
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);

    return 0;
}
