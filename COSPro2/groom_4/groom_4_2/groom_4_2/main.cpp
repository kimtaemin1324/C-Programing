#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 특정 조건을 만족하는지 확인하는 함수
int func_a(int passed, int non_passed) {
    return (passed > 1 && non_passed == 0);
}

// 각 과목의 점수를 받아서 특정 조건을 만족하는 경우를 계산하는 함수
int func_b(int scores[3]) {
    int answer = 0;
    if (scores[0] < 40) {
        answer++;
    }
    if (scores[1] < 44) {
        answer++;
    }
    if (scores[2] < 35) {
        answer++;
    }
    return answer;
}

// 각 과목의 점수를 받아서 특정 조건을 만족하는 경우를 계산하는 함수
int func_c(int scores[3]) {
    int answer = 0;
    if (scores[0] >= 80) {
        answer++;
    }
    if (scores[1] >= 88) {
        answer++;
    }
    if (scores[2] >= 70) {
        answer++;
    }
    return answer;
}

// 다중 과목의 성적을 받아서 특정 조건을 만족하는 경우를 계산하는 함수
int solution(int scores[][3], int scores_len) {
    int answer = 0;
    for (int i = 0; i < scores_len; i++) {
        // func_c: 과목별로 80 이상인 경우를 카운트
        int passed = func_c(scores[i]);

        // func_b: 과목별로 특정 조건을 만족하는 경우를 카운트
        int non_passed = func_b(scores[i]);

        // func_a: 특정 조건을 만족하는 경우를 카운트하고 결과를 누적
        answer += func_a(passed, non_passed);
    }
    return answer;
}

int main() {
    // 예제 1
    int scores1[2][3] = {
        {30, 40, 100},
        {97, 88, 95}
    };
    int ret1 = solution(scores1, 2);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    // 예제 2
    int scores2[6][3] = {
        {90, 88, 70},
        {85, 90, 90},
        {100, 100, 70},
        {30, 90, 80},
        {40, 10, 20},
        {83, 88, 80}
    };
    int ret2 = solution(scores2, 6);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}
