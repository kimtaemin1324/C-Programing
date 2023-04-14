#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int x;

	printf("점수를 입력해주시오:\n");
	scanf("%d", &x);

	if (x > 0)
	{
		x = -x;

	}

	printf("입력한 정수의 절대값 : %d\n", x);
}