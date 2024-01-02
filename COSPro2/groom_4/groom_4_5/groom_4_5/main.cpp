#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 주어진 칼로리 배열에서 최소 칼로리를 기준으로 추가로 필요한 칼로리를 계산하는 함수
int solution(int calorie[], int calorie_len) {
    int min_cal = calorie[0]; // 최소 칼로리를 배열의 첫 번째 요소로 초기화
    int answer = 0;

    // 각 음식의 칼로리를 순회하면서 필요한 추가 칼로리를 더함
    for (int i = 0; i < calorie_len; i++) {
        if (calorie[i] > min_cal)
            answer += calorie[i] - min_cal; // 현재 음식의 칼로리가 최소 칼로리보다 크면 추가로 필요한 칼로리를 더함
        else
            min_cal = calorie[i]; // 현재 음식의 칼로리가 최소 칼로리보다 작거나 같으면 최소 칼로리를 갱신
    }

    return answer; // 총 필요한 추가 칼로리 반환
}

int main() {
    // 예제 입력
    int calorie[] = { 713, 665, 873, 500, 751 };

    // solution 함수 호출 및 결과 출력
    int ret = solution(calorie, 5);
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}
