#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 주어진 무게를 갖는 상자 배열에서 허용 가능한 범위를 벗어나는 상자의 수를 계산하는 함수
int solution(int weight, int boxes[], int boxes_len) {
    int answer = 0;

    // 각 상자를 순회하면서 허용 가능한 범위를 벗어나는 상자의 수를 카운트
    for (int i = 0; i < boxes_len; i++)
        if (weight * 1.1 < boxes[i] || weight * 0.9 > boxes[i])
            answer++;

    return answer;
}

int main() {
    // 테스트 케이스
    int weight = 600;
    int boxes[5] = { 653, 670, 533, 540, 660 };
    int boxes_len = 5;

    // solution 함수 호출 및 결과 출력
    int ret = solution(weight, boxes, boxes_len);
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);

    return 0;
}
