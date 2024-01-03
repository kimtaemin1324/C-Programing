#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 양말 수를 계산하는 함수
int solution(int socks[], int socks_len) {
    int answer = 0;

    // 각 양말 종류별로 개수를 저장할 배열 생성 및 초기화
    int* count = (int*)malloc(sizeof(int) * 10);
    memset(count, 0, sizeof(int) * 10);

    // 각 양말의 종류별로 개수를 카운트
    for (int i = 0; i < socks_len; i++)
        count[socks[i]]++;

    // 각 양말 종류별로 필요한 최소한의 양말 수 계산
    for (int i = 0; i < 10; i++)
        answer += (count[i] % 2); // 홀수 개수의 양말이면 1을 더함

    return answer;
}

int main() {
    // 테스트 케이스
    int socks[] = { 1, 2, 1, 3, 2, 1 };
    int socks_len = 6;
    int ret = solution(socks, socks_len);

    // 결과 출력
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);

    return 0;
}
