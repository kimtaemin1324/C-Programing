#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 각 반의 학생 수 배열(classes)과 각 반당 최대 학생 수(m)를 고려하여 총 필요한 교실 수를 계산하는 함수
int solution(int classes[], int classes_len, int m) {
    int answer = 0;

    // 각 반의 학생 수를 반복하면서 교실 수 계산
    for (int i = 0; i < classes_len; i++) {
        answer += classes[i] / m; // 해당 반의 학생 수를 m으로 나눈 몫을 더함

        // 만약 해당 반의 학생 수를 m으로 나눈 나머지가 0이 아니면(나머지가 있으면)
        if (classes[i] - m != 0)
            answer++; // 추가로 교실이 필요함
    }

    return answer; // 총 필요한 교실 수 반환
}

int main() {
    // 예제 입력
    int classes[] = { 80, 45, 33, 20 };
    int m = 30;

    // solution 함수 호출 및 결과 출력
    int ret = solution(classes, 4, m);
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}
