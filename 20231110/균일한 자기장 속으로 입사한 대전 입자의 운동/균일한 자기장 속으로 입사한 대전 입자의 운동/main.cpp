#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main() 
{
    double v, q, B, r, m, F;

    printf("입자의 전하량 q: ");
    scanf("%lf", &q);

    printf("자기장의 세기 B: ");
    scanf("%lf", &B);

    printf("궤도 반지름 r: ");
    scanf("%lf", &r);

    printf("입자의 질량 m: ");
    scanf("%lf", &m);


    v = q * B * r / m;
    F = q * v * B;


    printf("속도 v: %3.1lf\n", v);
    printf("자기력의 크기 F: %3.1lf\n", F);

    return 0;
}
