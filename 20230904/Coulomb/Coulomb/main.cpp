#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define COULOMBS_CONSTANT 8.99e9

int main() 
{
    double q1, q2, r, force;
    printf("첫 번째 전하의 크기를 입력하세요: ");
    scanf("%lf", &q1);

    printf("두 번째 전하의 크기를 입력하세요: ");
    scanf("%lf", &q2);

    printf("두 전하 사이의 거리를 입력하세요: ");
    scanf("%lf", &r);

    force = (COULOMBS_CONSTANT * fabs(q1 * q2)) / (r * r);

    printf("두 전하 사이의 힘은 %.2lf N입니다.\n", force);

    return 0; 
}
