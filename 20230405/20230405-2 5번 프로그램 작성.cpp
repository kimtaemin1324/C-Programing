#include<stdio.h>
int main(void)
{
	int x;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &x);

	printf("���� �ڸ�: %d \n���� �ڸ�: %d \n", x / 10, x % 10);
}