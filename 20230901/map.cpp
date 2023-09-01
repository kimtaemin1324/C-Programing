#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main()
{
	double r = 0;
	double q1 = 0;
	double q2 = 0;
	double Fc = 0;
	int ke;
	Fc = (q1 * q2) / (r * r);

	printf("r을 입력하세요: ");
	scanf("%lf", &r);

	printf("q1을 입력하세요: ");
	scanf("%lf", &q1);

	printf("q2을 입력하세요: ");
	scanf("%lf", &q2);

	double k = 8.9876 * pow(10, 9);
	double force = k * (q1 * q2) / (r * r);

	printf("COULOMBS법칙에서 F의 값은 : %lf N\n", force);

}