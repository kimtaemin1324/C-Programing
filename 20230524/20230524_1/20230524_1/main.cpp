#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int even(int n);
int absolute(int n);
int sign(int n);

int main(void)
{
	int n;
	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &n);
	printf("even()�� ���: %d\n", even(n));
	printf("absolute()�� ���: %d\n", absolute(n));
	printf("sign()�� ���: %d\n", sign(n));
	return 0;
}

int even(int n)
{
	return (n % 2 == 0) ? 1 : 0;
}

int absolute(int n)
{
	return (n > 0) ? n : -n;
}

int sign(int n)
{
	return (n > 0) ? 1 : -1;
}