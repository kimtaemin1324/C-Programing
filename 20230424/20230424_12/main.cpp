#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int n;
	do {
		printf("¸·´ëÀÇ ³ôÀÌ(Á¾·á: -1): ");
		scanf("%d", &n);
		for (int i = 1; i <= n; i++)
		{
			printf("*");
		}
		printf("\n");
	} while (n != -1);
}