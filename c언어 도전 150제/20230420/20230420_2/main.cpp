#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h> //bool을 쓰기위해 필요
#define TRUE 1
#define FALSE 0

void main()
{
    int num1, num2;
    bool result;

    printf("첫번째 정수를 입력하세요: ");
    scanf("%d", &num1);

    printf("두번째 정수를 입력하세요: ");
    scanf("%d", &num2);

    result = (num1 < num2);

    if (result)
    {
        printf("%d = 참\n", result);
    }
    else
    {
        printf("%d=거짓\n", result);
    }
}