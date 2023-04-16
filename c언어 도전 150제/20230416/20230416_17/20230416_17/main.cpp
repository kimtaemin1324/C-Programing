#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int z;
	int sum;
	int avg;

	printf("첫번째 숫자를 입력하시오: ");
	scanf("%f", &x);

	printf("\n두번째 숫자를 입력하시오: ");
	scanf("%f", &y);

	printf("\n세번째 숫자를 입력하시오: ");
	scanf("%f", &z);

	sum = x + y + z;
	avg = sum / 3;

	printf("%f %f %f의 합: %f\n", x, y, z, sum);
	printf("%f %f %f의 평균: %f\n", x, y, z, avg);
	return 0;
}