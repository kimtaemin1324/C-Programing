#define _CTR_SECURE_NO_WARNINGES
#include <stdio.h>

void main()
{
	int x;
	printf("���� ������ �Է����ּ���: \n");
	scanf("%d", &x);

	if (x >= 90)
	{
		printf("�̹� ������ ������ A�Դϴ�. \n");
	}
	else if (x >= 80)
	{
		printf("�̹� ������ ������ B�Դϴ�. \n");
	}
	else if (x >= 70) 
	{
		printf("�̹� ������ ������ C�Դϴ�. \n"); 
	}
	else if (x >= 60) 
	{
		printf("�̹� ������ ������ D�Դϴ�. \n"); 
	}
	else 
	{	
		printf("�̹� ������ ������ F�Դϴ�. \n"); 
	}
	}
 
}