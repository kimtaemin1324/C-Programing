#define _CRT_SECURE_NO_WARNINGS 
#include	<stdio.h>	
int max3(int a, int b, int c);	
int min3(int a, int b, int c);	

int main(void)
{
	int num1, num2, num3;		
	int max, min;	

	printf("ù ��° ���� : ");	
	scanf("%d", &num1);		

	printf("�� ��° ���� : ");	
	scanf("%d", &num2);		
	printf("�� ��° ���� : ");	
	scanf("%d", &num3);		

	max = max3(num1, num2, num3);
	min = min3(num1, num2, num3);

	printf("�� ���� ���� %d, %d, %d �� �ִ밪 : %d\n", num1, num2, num3, max);
	printf("�� ���� ���� %d, %d, %d �� �ּҰ� : %d\n", num1, num2, num3, min);
}

int max3(int a, int b, int c)	
{
	int max = a;		
	if (max < b)		
		max = b;	
	if (max < c)		
		max = c;	
	return max;		
}

int min3(int a, int b, int c)	
{
	int min = a;		
	if (min > b)		
		min = b;		
	if (min > c)		
		min = c;	
	return 0;		
}