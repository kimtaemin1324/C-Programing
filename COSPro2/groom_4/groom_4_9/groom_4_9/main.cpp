#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 봉우리의 개수를 찾는 함수
int solution(int height[][4], int height_len) {
    int count = 1; // 봉우리의 개수를 저장할 변수를 1로 초기화 (첫 번째 봉우리를 이미 카운트함)

    // 이중 루프를 사용하여 2차원 배열의 각 원소를 검사
    for (int i = 0; i < height_len; i++) {
        for (int j = 0; j < height_len; j++) {
            // 현재 위치의 높이가 주변보다 작다면 (봉우리라면)
            if (height[i][j] < height[i][j - 1] && height[i][j] < height[i + 1][j] &&
                height[i][j] < height[i][j + 1] && height[i][j] < height[i - 1][j]) {
                count++; // 봉우리 개수를 증가시킴
            }
        }
    }
    return count; // 최종적인 봉우리 개수 반환
}

int main() {
    // 2차원 배열을 선언하고 초기화
    int height[4][4] = { {3, 6, 2, 8}, {7, 3, 4, 2}, {8, 6, 7, 3}, {5, 3, 2, 9} };
    int height_len = 4; // 배열의 크기

    // solution 함수 호출
    int ret = solution(height, height_len);

    // 결과 출력
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}