#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>

#define MAX_RESISTOR_NO 10
double resistor[MAX_RESISTOR_NO] = { 0,0, };


double series_resistor_calculator(int number)
{
	double total_resistor = 0.0;

	for (int i = 0; i < number; i++)
	{
		total_resistor += resistor[i];
	}

	printf("���� ������ ������ %6.3lf �Դϴ�.\n", total_resistor);

	return total_resistor;
}

double parallel_resistor_calculator(int number)
{
	double total_resistor = 0.0;
	for (int i = 0; i < number; i++)
	{

		5
	}

	return total_resistor;
}


int main()
{
	int select;
	int no_resistor = 0;
	scanf(" ����(1), ����(2) �ռ� ���� ����� �����ϼ��� :  %d", &select);
	switch (select)
	{
	case 1:
		printf("���� ������ �����߽��ϴ�.\n");
		break;
	case 2:
		printf("���� ������ �����߽��ϴ�.\n");
		break;
	default:
		printf(" �߸� �����߽��ϴ�. �ٽ� �������ּ���.\n");
		break;
	}
	printf("\n\n");

	printf("������ ������ �Է��ϼ��� ");
	scanf("%d", &no_resistor);

	for (int i = 0; i < no_resistor; i++)
	{
		printf("[%1d] ��° ���װ��� �Է��ϼ���. ", i + 1);
		scanf("%if", &resistor[i]);

		printf("[%1d] ��° ���װ��� %6.3lf �Դϴ�.\n\n", i + 1, resistor[i]);

	}

	switch (select)
	{
	case 1:
		printf("���� ������ ����մϴ�. \n");
		series_resistor_calculator(no_resistor);
		break;

	case 2:
		printf("���� ������ ����մϴ�. \n");
		parallel_resistor_calculator(no_resistor);
		break;
	}
	return 1;



}