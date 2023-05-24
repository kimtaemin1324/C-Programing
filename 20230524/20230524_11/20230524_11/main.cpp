#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 주사위를 굴리는 함수
int roll_dice() {
    return (rand() % 6) + 1;
}

int main(void) {
    int user_total = 0, computer_total = 0;
    srand(time(NULL));

    // 주사위를 3번씩 굴려서 점수 합산
    for (int i = 0; i < 3; i++) {
        user_total += roll_dice();
        computer_total += roll_dice();
    }

    // 결과 출력
    printf("사용자 주사위= %d\n", user_total);
    printf("컴퓨터 주사위= %d\n", computer_total);

    if (user_total > computer_total) {
        printf("사용자 승리!\n");
    }
    else if (user_total < computer_total) {
        printf("컴퓨터 승리!\n");
    }
    else {
        printf("비겼습니다. !\n");
    }

    return 0;
}