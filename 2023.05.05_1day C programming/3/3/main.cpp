#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int score, a;


	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &score);

	a = score / 10;

	switch (a)
	{
	case 9:
		printf("A");
		break;
	case 8:
		printf("B");
		break;
	case 7:
		printf("C");
		break;
	case 6:
		printf("D");
		break;
	default:
		printf("F");
		break;
	}
	return 0;
}