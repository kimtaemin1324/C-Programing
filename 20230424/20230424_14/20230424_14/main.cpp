#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int f = 0, b = 1, c = 0, a = 0;
	printf("몇번째 항까지 구할까요? ");
	scanf("%d", &f);
	for (int i = 0; i <= f; i++)
	{
		printf("%d, ", a);
		c = a + b;
		a = b;
		b = c;
	}
}