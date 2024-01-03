#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 가장 늦게 시작하는 수업의 인덱스를 찾는 함수
int func_a(int time_table[], int time_table_len) {
    int answer = 0;
    for (int i = time_table_len - 1; i >= 0; i--) {
        if (time_table[i] == 1) {
            answer = i;
            break;
        }
    }
    return answer;
}

// 두 수업 사이에 비어 있는 수업의 개수를 찾는 함수
int func_b(int time_table[], int class1, int class2) {
    int answer = 0;
    for (int i = class1; i < class2; i++)
        if (time_table[i] == 0)
            answer++;
    return answer;
}

// 가장 일찍 시작하는 수업의 인덱스를 찾는 함수
int func_c(int time_table[], int time_table_len) {
    int answer = 0;
    for (int i = 0; i < time_table_len; i++) {
        if (time_table[i] == 1) {
            answer = i;
            break;
        }
    }
    return answer;
}

// 주어진 시간표에서 연속된 수업 중 비어 있는 수업의 수를 계산하는 함수
int solution(int time_table[], int time_table_len) {
    int answer = 0;

    // 가장 빨리 시작하는 수업과 가장 늦게 시작하는 수업의 인덱스를 찾음
    int first_class = func_c(time_table, time_table_len);
    int last_class = func_a(time_table, time_table_len);

    // 두 수업 사이의 비어 있는 수업의 개수를 계산
    answer = func_b(time_table, first_class, last_class);

    return answer;
}

int main() {
    int time_table[] = { 1, 1, 0, 0, 1, 0, 1, 0, 0, 0 };
    int time_table_len = 10;

    // solution 함수를 호출하고 반환값을 출력
    int ret = solution(time_table, time_table_len);
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);

    return 0;
}