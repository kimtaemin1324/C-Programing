#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 사다리를 오르고 난 후 플레이어의 최종 위치를 찾는 함수
int solution(int ladders[][2], int ladders_len, int win) {
    int answer = 0;

    // 보드 상의 플레이어 위치를 나타내는 배열
    int player[6] = { 1, 2, 3, 4, 5, 6 };

    // 각 사다리에 대해 플레이어 위치를 교환
    for (int i = 0; i < ladders_len; i++) {
        int temp = player[ladders[i][0] - 1];
        player[ladders[i][0] - 1] = player[ladders[i][0]];
        player[ladders[i][0]] = temp;
    }

    // 이기려는 플레이어의 최종 위치를 가져옴
    answer = player[win - 1];

    // 최종 위치를 반환
    return answer;
}

int main() {
    // 보드에 있는 사다리를 나타내는 배열
    int ladders[5][2] = { {1, 2}, {3, 4}, {2, 3}, {4, 5}, {5, 6} };
    int ladders_len = 5;
    int win = 3;

    // solution 함수를 호출하고 반환값을 출력
    int ret = solution(ladders, ladders_len, win);
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}