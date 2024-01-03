#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 한국어와 영어 성적을 기반으로 수학 성적을 계산하고 특정 조건에 따라 최종 결과를 반환하는 함수
int solution(int korean, int english) {
    int answer = 0;

    // 수학 성적 계산
    int math = 210 - (korean + english);

    // 수학 성적이 100보다 크면 -1을 반환, 그렇지 않으면 계산된 수학 성적 반환
    if (math > 100)
        answer = -1;
    else
        answer = math;

    return answer;
}

int main() {
    // 한국어와 영어 성적
    int korean = 70;
    int english = 60;

    // solution 함수를 호출하고 반환값을 출력
    int ret = solution(korean, english);
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);

    return 0;
}
