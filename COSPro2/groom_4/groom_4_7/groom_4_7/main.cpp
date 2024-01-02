#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 두 배열 간의 최대 차이를 계산하는 함수
int func_a(int scores1[], int scores2[], int scores_len) {
    int answer = 0;

    // 각 인덱스별로 두 배열의 차이를 계산하면서 최대 차이를 업데이트
    for (int i = 0; i < scores_len; i++)
        if (answer < scores2[i] - scores1[i])
            answer = scores2[i] - scores1[i];

    return answer;
}

// 두 배열 간의 최소 차이를 계산하는 함수
int func_b(int scores1[], int scores2[], int scores_len) {
    int answer = 0;

    // 각 인덱스별로 두 배열의 차이를 계산하면서 최소 차이를 업데이트
    for (int i = 0; i < scores_len; i++)
        if (answer > scores1[i] - scores2[i])
            answer = scores1[i] - scores2[i];

    return answer;
}

// 중간 점수 배열과 기말 점수 배열을 받아 최대, 최소 차이를 계산하는 함수
int* solution(int mid_scores[], int mid_scores_len, int final_scores[], int final_scores_len) {
    int* answer = (int*)malloc(sizeof(int) * 2);

    // func_a: 중간 점수 배열과 기말 점수 배열 간의 최대 차이 계산
    answer[0] = func_a(mid_scores, final_scores, mid_scores_len);

    // func_b: 중간 점수 배열과 기말 점수 배열 간의 최소 차이 계산
    answer[1] = func_b(final_scores, mid_scores, mid_scores_len);

    return answer;
}

int main() {
    // 예제 입력
    int mid_scores[] = { 20, 50, 40 };
    int final_scores[] = { 10, 50, 70 };

    // solution 함수 호출 및 결과 출력
    int* ret = solution(mid_scores, 3, final_scores, 3);
    printf("solution 함수의 반환 값은 [%d, %d] 입니다.\n", ret[0], ret[1]);      
}