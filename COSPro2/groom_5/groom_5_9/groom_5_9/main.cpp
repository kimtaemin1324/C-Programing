#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 각 원소가 몇 번째로 큰 숫자인지를 나타내는 배열을 반환하는 함수
int* solution(int score[], int score_len) {
    int* answer;
    answer = (int*)malloc(sizeof(int) * score_len); // 반환할 배열 할당

    for (int i = 0; i < score_len; i++) {
        answer[i] = 1; // 초기값을 1로 설정

        // 현재 원소(score[i])와 나머지 원소들을 비교하여 현재 원소가 몇 번째로 큰지를 계산
        for (int j = 0; j < score_len; j++) {
            if (score[i] < score[j]) answer[i]++;
        }
    }
    return answer;
}

int main() {
    // 첫 번째 배열에 대한 테스트
    int score1[] = { 90, 87, 87, 23, 35, 28, 12, 46 };
    int score_len1 = 8;
    int* ret1 = solution(score1, score_len1);

    printf("solution 함수의 반환 값은 [");
    for (int i = 0; i < score_len1; i++) {
        if (i != 0)
            printf(", ");
        printf("%d", ret1[i]);
    }
    printf("] 입니다.\n");

    // 두 번째 배열에 대한 테스트
    int score2[] = { 10, 20, 20, 30 };
    int score_len2 = 4;
    int* ret2 = solution(score2, score_len2);

    printf("solution 함수의 반환 값은 [");
    for (int i = 0; i < score_len2; i++) {
        if (i != 0)
            printf(", ");
        printf("%d", ret2[i]);
    }
    printf("] 입니다.\n");

    // 할당된 메모리 해제
    free(ret1);
    free(ret2);

    return 0;
}
