#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 시간 테이블과 강의실 수를 고려하여 가장 많은 이용 시간을 가진 강의실의 이용 시간을 반환하는 함수
int solution(int time_table[], int time_table_len, int n) {
    int answer = 0;
    int* arr = (int*)malloc(sizeof(int) * n); // 강의실별 이용 시간을 저장하는 배열 동적 할당

    // 초기화: 강의실별 이용 시간을 0으로 설정
    for (int i = 0; i < n; i++) {
        arr[i] = 0;
    }

    // 시간 테이블을 순회하면서 강의실별 이용 시간을 계산하고 최대 이용 시간을 업데이트
    for (int i = 0; i < time_table_len; i++) {
        arr[i % n] += time_table[i]; // 시간 테이블의 각 원소를 강의실에 할당
        if (arr[i % n] > answer) answer = arr[i % n]; // 최대 이용 시간 업데이트
    }

    // 동적 할당된 배열 메모리 해제
    free(arr);

    return answer;
}

int main() {
    // 첫 번째 테스트 케이스
    int time_table1[] = { 1, 5, 1, 9 };
    int time_table_len1 = 4;
    int n1 = 3;
    int ret1 = solution(time_table1, time_table_len1, n1);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    // 두 번째 테스트 케이스
    int time_table2[] = { 4, 8, 2, 5, 4, 6, 7 };
    int time_table_len2 = 7;
    int n2 = 4;
    int ret2 = solution(time_table2, time_table_len2, n2);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);

    
}
