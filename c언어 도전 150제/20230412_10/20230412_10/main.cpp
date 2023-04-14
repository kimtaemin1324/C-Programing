#define _CTR_SECURE_NO_WARNINGES
#include <stdio.h>

void main()
{
	int x;
	printf("시험 점수를 입력해주세요: \n");
	scanf("%d", &x);

	if (x >= 90)
	{
		printf("이번 시험의 학점은 A입니다. \n");
	}
	else if (x >= 80)
	{
		printf("이번 시험의 학점은 B입니다. \n");
	}
	else if (x >= 70) 
	{
		printf("이번 시험의 학점은 C입니다. \n"); 
	}
	else if (x >= 60) 
	{
		printf("이번 시험의 학점은 D입니다. \n"); 
	}
	else 
	{	
		printf("이번 시험의 학점은 F입니다. \n"); 
	}
	}
 
}