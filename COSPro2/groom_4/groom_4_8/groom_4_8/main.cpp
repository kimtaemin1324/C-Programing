#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 후보자 중 과반수 이상의 표를 획득한 후보를 찾는 함수
int solution(int n, int votes[], int votes_len) {
    // 각 후보자의 표 수를 저장할 배열 초기화
    int arr[101] = { 0, };

    // 각 후보자에 대한 표 수 카운트
    for (int i = 0; i < votes_len; i++) {
        arr[votes[i]]++;
    }

    // 어떤 후보자가 전체 표의 과반수 이상을 획득했는지 확인
    for (int i = 1; i < n + 1; i++) {
        if (arr[i] > votes_len / 2) {
            // 만약 어떤 후보자가 과반수 이상의 표를 획득했다면 해당 후보자의 번호 반환
            return i;
        }
    }

    // 과반수 이상의 표를 획득한 후보자가 없다면 -1 반환
    return -1;
}

int main() {
    // 첫 번째 테스트 케이스
    int n1 = 3;
    int votes1[7] = { 1, 2, 1, 3, 1, 2, 1 };
    int votes_len1 = 7;
    int ret1 = solution(n1, votes1, votes_len1);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    // 두 번째 테스트 케이스
    int n2 = 2;
    int votes2[7] = { 2, 1, 2, 1, 2, 2, 1 };
    int votes_len2 = 7;
    int ret2 = solution(n2, votes2, votes_len2);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}