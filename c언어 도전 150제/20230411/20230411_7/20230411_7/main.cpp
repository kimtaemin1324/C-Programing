#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	double x;  // ���
	int y;     //��¥

	printf("���ְ� ü���µ��� �Է��� �ּ���:  \n");
	scanf("%lf", &x);
	printf("���� ���� �ϼ�:  \n");
	scanf("%d", &y);

	if (x >= 33 and x < 35 and y >= 2)
	{
		printf("�������Ǻ� \n");

	}
	else if (x >= 35.0 and y >= 2)
	{
		printf("�����溸\n");

	}
	else
	{
		printf("�������Ǻ�, �����溸 �ҽ��� �����ϴ�. \n");
	}

}