#include<stdio.h>
#define PI 3.141592

int main(void)
{
	double x, A, V;

	printf("���� �������� �Է��Ͻÿ�: ");
	scanf_s("%lf", &x);

	A = 4 * PI * x * x;
	V = 4 * PI * x * x * x / 3;
	printf("ǥ������ %lf�Դϴ�.\nü���� %lf�Դϴ�.\n", A, V);

	return 0;
}