#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main() 
{
    double v, q, B, r, m, F;

    printf("������ ���Ϸ� q: ");
    scanf("%lf", &q);

    printf("�ڱ����� ���� B: ");
    scanf("%lf", &B);

    printf("�˵� ������ r: ");
    scanf("%lf", &r);

    printf("������ ���� m: ");
    scanf("%lf", &m);


    v = q * B * r / m;
    F = q * v * B;


    printf("�ӵ� v: %3.1lf\n", v);
    printf("�ڱ���� ũ�� F: %3.1lf\n", F);

    return 0;
}
