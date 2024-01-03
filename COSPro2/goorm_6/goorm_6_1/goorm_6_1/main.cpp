#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 주어진 온도 배열에서 A와 B 인덱스 사이의 값들 중에서 A와 B보다 큰 값들의 개수를 계산하는 함수
int solution(int temperature[], int temperature_len, int A, int B) {
    int answer = 0;

    // A부터 B-1까지 반복하면서 A와 B보다 큰 값들을 찾아 개수를 증가
    for (int i = A; i < B; i++) {
        if (temperature[i] > temperature[A] && temperature[i] > temperature[B]) {
            answer++;
        }
    }

    return answer;
}

int main() {
    // 테스트 케이스에 사용될 온도 배열과 인덱스
    int temperature[] = { 3, 2, 1, 5, 4, 3, 3, 2 };
    int temperature_len = 8;
    int A = 1;
    int B = 6;

    // solution 함수를 호출하고 반환값을 출력
    int ret = solution(temperature, temperature_len, A, B);
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);

}
