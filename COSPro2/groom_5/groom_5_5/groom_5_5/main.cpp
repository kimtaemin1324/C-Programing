#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// a의 배수 중에서 b로 나누어 떨어지는 첫 번째 값을 찾는 함수
int solution(int a, int b) {
    int answer = 0;

    // 1부터 b까지 반복하면서 a의 배수 중에서 b로 나누어 떨어지는 값을 찾음
    for (int i = 1; i <= b; i++) {
        if ((a * i) % b == 0) {
            answer = a * i;
            break;  // 찾았으면 반복문 종료
        }
    }

    return answer;
}

int main() {
    // 두 정수 a와 b
    int a = 4;
    int b = 6;

    // solution 함수를 호출하고 반환값을 출력
    int ret = solution(a, b);
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);

    return 0;
}
