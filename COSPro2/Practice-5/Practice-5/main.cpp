#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 두 배열의 각 요소의 차이 중 최댓값을 찾는 함수
int func_a(int scores1[], int scores2[], int scores_len) {
    int answer = 0;
    for (int i = 0; i < scores_len; i++)
        if (answer < scores2[i] - scores1[i])
            answer = scores2[i] - scores1[i];
    return answer;
}


// 두 배열의 각 요소의 차이 중 최솟값을 찾는 함수
int func_b(int scores1[], int scores2[], int scores_len) {
    int answer = 0;
    for (int i = 0; i < scores_len; i++)
        if (answer > scores1[i] - scores2[i])
            answer = scores1[i] - scores2[i];
    return answer;
}

// 최종적인 해답을 반환하는 함수
int* solution(int mid_scores[], int mid_scores_len, int final_scores[], int final_scores_len) {
   
    int* answer = (int*)malloc(sizeof(int) * 2); // 해답을 저장할 배열 동적 할당
    answer[0] = func_a(mid_scores, final_scores, mid_scores_len);// func_a를 이용하여 배열의 최댓값 계산 후 저장
    answer[1] = func_b(final_scores, mid_scores, mid_scores_len);// func_b를 이용하여 배열의 최솟값 계산 후 저장
    return answer;// 최종 해답 반환
}
int main() {
    int mid_scores[] = { 20, 50, 40 };
    int final_scores[] = { 10, 50, 70 };
    int* ret = solution(mid_scores, 3, final_scores, 3);

    printf("solution 함수의 반환 값은 [");
    for (int i = 0; i < 2; i++) {
        if (i != 0) printf(", ");
        printf("%d", ret[i]);
    }
    printf("] 입니다.\n");
}