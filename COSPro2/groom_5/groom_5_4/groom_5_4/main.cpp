#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 택견, 달리기, 사격 세 가지 종목에서 얻는 점수를 기반으로 최종 점수를 계산하는 함수
int solution(int taekwondo, int running, int shooting[], int shooting_len) {
    int answer = 0;

    // 택견 점수 계산
    if (taekwondo >= 25)
        answer += 250;
    else
        answer += taekwondo * 8;

    // 달리기 점수 계산
    answer += 250 + (60 - running) * 5;

    // 사격 점수 계산
    int count = 0;
    for (int i = 0; i < shooting_len; i++) {
        answer += shooting[i];
        if (shooting[i] == 10)
            count++;
    }

    // 사격에서 10점을 받은 횟수가 7회 이상인 경우 추가 점수 부여
    if (count >= 7)
        answer += 100;

    return answer;
}

int main() {
    // 각 종목에서의 성적 및 횟수
    int taekwondo = 27;
    int running = 63;
    int shooting[] = { 9, 10, 8, 10, 10, 10, 7, 10, 10, 10 };
    int shooting_len = 10;

    // solution 함수를 호출하고 반환값을 출력
    int ret = solution(taekwondo, running, shooting, shooting_len);
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);

    return 0;
}