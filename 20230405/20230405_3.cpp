#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, d, result;

	printf("���ڿ� �и� �Է��Ͻÿ�: ");
	scanf("%d %d", &n, &d);

	if (d == 0)
	{
		printf("0���� ���� ���� �����ϴ�.\n");
    }
	else
	{
		result = n / d;
		printf("����� %d�Դϴ�.\n", result);
	}

	return 0;
}