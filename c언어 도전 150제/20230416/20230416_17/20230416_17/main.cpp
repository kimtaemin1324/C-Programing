#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int z;
	int sum;
	int avg;

	printf("ù��° ���ڸ� �Է��Ͻÿ�: ");
	scanf("%f", &x);

	printf("\n�ι�° ���ڸ� �Է��Ͻÿ�: ");
	scanf("%f", &y);

	printf("\n����° ���ڸ� �Է��Ͻÿ�: ");
	scanf("%f", &z);

	sum = x + y + z;
	avg = sum / 3;

	printf("%f %f %f�� ��: %f\n", x, y, z, sum);
	printf("%f %f %f�� ���: %f\n", x, y, z, avg);
	return 0;
}