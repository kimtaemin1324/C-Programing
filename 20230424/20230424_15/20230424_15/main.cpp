#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    int n = 0, r = 0, i = 0, a = 1, b = 1, result = 1;
    printf("n의 값: ");
    scanf("%d", &n);
    printf("r의 값: ");
    scanf("%d", &r);
    for (i = 1; i <= (n - r - 1); i++)
    {
        result *= i;
    }
    printf("순열의 값은 %d입니다.\n", result);
}