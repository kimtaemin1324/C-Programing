#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int score[], int score_len) {
    int* answer;
    answer = (int*)malloc(sizeof(int) * score_len);   //malloc()함수를 이용하여 메모리 할당

    //answer의 모든 메모리의 값을 1로 초기화(등수)
    for (int i = 0; i < score_len; i++) {
        answer[i] = 1;
    }

    //나[i]와 다른사람[j]를 비교해서 나보다 점수가 높은 사람이 있으면 내 등수 1증가, 내가 남보다 더 높으면 남 등수 1증가
    //증가 -> 등수가 낮아진다는 뜻
    for (int i = 0; i < score_len; i++) {
        for (int j = i + 1; j < score_len; j++) {
            if (score[i] < score[j])
                answer[i]++;
            else if (score[i] > score[j])
                answer[j]++;
        }
    }
    return answer;
}

int main() {
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
}

