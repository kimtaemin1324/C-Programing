#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int x = 20;
	int y;

	printf("y의 값을 입력해주시오: \n");
	scanf("%d", &y);

	if (x > y)
	{
		printf("x의 값이 y보다 큽니다. \n");
    }
	else if (x < y)
	{
		printf("x의 값이 y보다 작습니다. \n");
	}
	else
	{
		printf("x와 y의 값이 같습니다. \n");
	}
}