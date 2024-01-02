#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 'X'의 인덱스를 찾는 함수
int* solution(char* schedule[], int schedule_len) {
    // 'X'의 발생 횟수를 세는 변수
    int x_count = 0;
    for (int i = 0; i < 10; i++)
        if (schedule[i][0] == 'X')
            x_count++;

    // 'X'의 인덱스를 저장할 배열 동적 할당
    int* answer = (int*)malloc(sizeof(int) * x_count);

    // 'X'의 인덱스를 배열에 저장
    for (int i = 0, j = 0; i < 10; i++) {
        if (schedule[i][0] == 'X') {
            answer[j++] = i + 1; // 'X'의 인덱스 (1부터 시작)를 배열에 저장
        }
    }
    return answer; // 'X'의 인덱스를 담은 동적 할당 배열 반환
}

int main() {
    // 예제 일정 배열
    char* schedule[] = { "O", "X", "X", "O", "O", "O", "X", "O", "X", "X" };

    // solution 함수 호출
    int* ret = solution(schedule, 10);

    // 결과 출력
    printf("solution 함수의 반환 값은 ");
    for (int i = 0; i < 5; i++)
        printf("%d, ", ret[i]);
    printf("입니다.");
}