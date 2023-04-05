#include<stdio.h>
int main(void)
{
	int x;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &x);

	printf("십의 자리: %d \n일의 자리: %d \n", x / 10, x % 10);
}