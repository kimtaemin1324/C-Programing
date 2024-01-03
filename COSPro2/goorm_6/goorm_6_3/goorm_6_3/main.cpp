#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 각 키 구간에 속하는 사람의 수를 세어 배열로 반환하는 함수
int* solution(int people[], int people_len) {
    // 결과를 저장할 배열 동적 할당
    int* answer = (int*)malloc(sizeof(int) * 4);
    // 할당된 배열 초기화
    memset(answer, 0, sizeof(int) * 4);

    // 각 사람의 키에 따라 특정 구간에 속하는지 확인하고 각 구간별로 카운트
    for (int i = 0; i < people_len; i++) {
        if (people[i] < 95)
            answer[0]++;
        else if (people[i] < 100)
            answer[1]++;
        else if (people[i] < 105)
            answer[2]++;
        else
            answer[3]++;
    }

    return answer; // 결과 배열 반환
}

// 메인 함수
int main() {
    // 키 배열과 배열의 길이를 지정한 테스트 케이스
    int people[] = { 97, 102, 93, 100, 107 };
    int people_len = 5;

    // solution 함수를 호출하고 반환값을 출력
    int* ret = solution(people, people_len);

    printf("solution 함수의 반환 값은 [");
    for (int i = 0; i < 4; i++) {
        if (i != 0)
            printf(", ");
        printf("%d", ret[i]);
    }
    printf("] 입니다.\n");

}
