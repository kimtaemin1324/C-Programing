#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int x = 0;
	int y;
	int z = 0;
	y = 5;

	printf("x값을 대입해주세요: \n", x);
	scanf("%d", &x);
	z = x - y;
	printf("x값에 5를 빼면 : %d \n", z);
	scanf("%d", &z);
}