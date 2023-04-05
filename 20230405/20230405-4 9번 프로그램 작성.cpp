#include<stdio.h>

int main(void)
{
	double AC, AE, BC, DE;

	printf("지팡이의 높이를 입력하시오: ");
	scanf_s("%lf", &BC);

	printf("지팡이의 그림자의 길이를 입력하시오: ");
	scanf_s("%lf", &AC);

	printf("피라미드의 높이를 입력하시오: ");
	scanf_s("%lf", &AE);

	DE = AE * BC / AC;
	printf("피라미드의 높이는 %lf입니다. \n", DE);

	return 0;

	

	
}