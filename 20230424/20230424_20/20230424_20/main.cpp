#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define MAX_CAPACITY 500
#define MIN_LEVEL 20
#include <time.h>
#include <stdlib.h>

void main()
{
    int sticks = 12;
    int num;
    srand(time(NULL));

    while (sticks > 0)
    {
        printf("현재 스틱 개수: %d\n", sticks);
        printf("사용자는 몇 개의 스틱을 가져갈까요? (0~3개): ");
        scanf("%d", &num);
        while (num < 0 || num > 3 || num > sticks)
        {
            printf("잘못된 입력입니다. 0~%d개의 스틱 중에서 선택하세요: ", sticks);
            scanf("%d", &num);
        }
        sticks -= num;
        if (sticks == 0)
        {
            printf("컴퓨터 승리\n");
            break;
        }
        printf("컴퓨터는 %d개의 스틱을 가져갔습니다.\n", rand() % (sticks > 3 ? 4 : sticks));
        sticks -= num;
        if (sticks == 0)
        {
            printf("승리\n");
            break;
        }
    }
}