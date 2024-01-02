#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 홀수 번째 인덱스의 문자를 추출하는 함수
char* func_a(char* bundle, int start, int n) {
    char* answer = (char*)malloc(sizeof(char) * n); // 결과를 저장할 동적 할당 배열 생성

    // 홀수 번째 인덱스의 문자를 추출하여 결과 배열에 저장
    for (int i = 0; i < n; i++)
        answer[i] = bundle[start + i * 2];

    return answer; // 추출된 문자 배열 반환
}

// 두 개의 점수를 비교하고 결과를 배열로 반환하는 함수
int* func_b(int score1, int score2) {
    int* answer = (int*)malloc(sizeof(int) * 2); // 결과를 저장할 동적 할당 배열 생성

    // 두 점수를 비교하여 결과 배열에 저장
    if (score1 > score2) {
        answer[0] = 1;      // 첫 번째 플레이어 승리 표시
        answer[1] = score1; // 승리한 점수 저장
    }
    else if (score1 < score2) {
        answer[0] = 2;      // 두 번째 플레이어 승리 표시
        answer[1] = score2; // 승리한 점수 저장
    }
    else {
        answer[0] = 0;      // 무승부 표시
        answer[1] = score1; // 무승부일 경우 한 플레이어의 점수 저장
    }

    return answer; // 결과 배열 반환
}

// 문자 배열의 각 문자에 대한 숫자값을 합산하는 함수
int func_c(char* card, int card_length) {
    int answer = 0;

    // 문자 배열의 각 문자에 대한 숫자값을 합산
    for (int i = 0; i < card_length; i++) {
        answer += card[i] - 'a' + 1; // 'a'를 1로 매핑하여 합산
    }

    return answer; // 합산 결과 반환
}

// 주어진 번들에서 세부 조건에 따라 결과 계산하는 함수
int* solution(int n, char* bundle) {
    // 두 플레이어의 카드 번들 추출
    char* a_cards = func_a(bundle, 0, n);
    char* b_cards = func_a(bundle, 0, n);

    // 카드에 대한 숫자값 합산
    int a_score = func_c(a_cards, n);
    int b_score = func_c(b_cards, n);

    // 두 플레이어의 점수 비교 및 결과 반환
    int* answer = func_b(a_score, b_score);

    return answer; // 결과 배열 반환
}

int main() {
    // 예제 입력
    int n = 4;
    char* bundle = "cacdbdedccbb";

    // 결과 계산 및 출력
    int* ret = solution(n, bundle);
    printf("solution 함수의 반환 값은 [%d, %d] 입니다.\n", ret[0], ret[1]);

}