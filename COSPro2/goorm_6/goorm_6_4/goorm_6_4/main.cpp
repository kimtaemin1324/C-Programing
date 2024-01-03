#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 카드의 총 점수를 계산하는 함수
int solution(char* cards[][2], int cards_len) {
    int answer = 0;
    int count = 0;

    // 같은 색상의 카드가 3장 있는지 확인하고 count 증가
    if (!strcmp(cards[0][0], cards[1][0])) count++;
    else if (!strcmp(cards[1][0], cards[2][0])) count++;
    else if (!strcmp(cards[0][0], cards[2][0])) count++;

    // 모든 카드의 숫자를 더함
    for (int i = 0; i < cards_len; i++) {
        answer += atoi(cards[i][1]);
    }

    // 같은 색상의 카드가 3장 있으면 점수를 3배로, 1장이면 2배로 곱함
    if (count >= 3)
        answer *= 3;
    else if (count >= 1)
        answer *= 2;

    return answer;
}

int main() {
    // 첫 번째 테스트 케이스
    char* cards1[][2] = { {"blue", "2"}, {"red", "5"}, {"black", "3"} };
    int cards_len1 = 3;
    int ret1 = solution(cards1, cards_len1);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    // 두 번째 테스트 케이스
    char* cards2[][2] = { {"blue", "2"}, {"blue", "5"}, {"black", "3"} };
    int cards_len2 = 3;
    int ret2 = solution(cards2, cards_len2);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);

    return 0;
}
