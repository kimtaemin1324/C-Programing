#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_CAPACITY 500
#define MIN_LEVEL 20

void main()
{
    int fuel = 100;
    char action;
    int amount;

    printf("현재연료량: %d\n", fuel);

    while (1) {
        printf("연료충전은 +, 소모는 -로 입력해주세요: ");
        scanf(" %c%d", &action, &amount);

        if (action == '+')
        {
            if (fuel + amount > MAX_CAPACITY)
            {
                printf("최대 용량을 초과했습니다.\n");
            }
            else
            {
                fuel += amount;
                printf("현재 연료량: %d\n", fuel);
            }
        }
        else if (action == '-')
        {
            if (fuel - amount < 0)
            {
                printf("연료가 부족합니다.\n");
            }
            else
            {
                fuel -= amount;
                printf("현재 연료량: %d\n", fuel);

                if (fuel < MIN_LEVEL)
                {
                    printf("(경고) 연료가 %d리터 미만입니다.\n", MIN_LEVEL);
                }
            }
        }
    }
}