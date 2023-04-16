#define _CRT_SECURE_NO_WARNINGS 
#include	<stdio.h>	
int max3(int a, int b, int c);	
int min3(int a, int b, int c);	

int main(void)
{
	int num1, num2, num3;		
	int max, min;	

	printf("첫 번째 정수 : ");	
	scanf("%d", &num1);		

	printf("두 번째 정수 : ");	
	scanf("%d", &num2);		
	printf("세 번째 정수 : ");	
	scanf("%d", &num3);		

	max = max3(num1, num2, num3);
	min = min3(num1, num2, num3);

	printf("세 개의 정수 %d, %d, %d 중 최대값 : %d\n", num1, num2, num3, max);
	printf("세 개의 정수 %d, %d, %d 중 최소값 : %d\n", num1, num2, num3, min);
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