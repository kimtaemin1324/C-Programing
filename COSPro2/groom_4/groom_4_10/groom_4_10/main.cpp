#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 점수 배열에서 특정 점수 이상을 받은 학생의 수를 세는 함수
int solution(int scores[], int scores_len, int cutline) {
    int answer = 0; // 특정 점수 이상을 받은 학생의 수를 저장하는 변수를 초기화

    // 주어진 배열을 순회하면서 점수가 특정 점수 이상인 경우를 세기
    for (int i = 0; i < scores_len; i++) {
        if (scores[i] >= cutline) {
            answer++; // 특정 점수 이상을 받은 학생이면 answer 증가
        }
    }

    return answer; // 최종적으로 특정 점수 이상을 받은 학생의 수를 반환
}

int main() {
    // 테스트용으로 점수 배열, 배열의 길이, 점수 기준 값 설정
    int scores[5] = { 80, 90, 55, 60, 59 };
    int scores_len = 5;
    int cutline = 60;

    // solution 함수 호출하여 결과 얻기
    int ret = solution(scores, scores_len, cutline);

    // 결과 출력
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}