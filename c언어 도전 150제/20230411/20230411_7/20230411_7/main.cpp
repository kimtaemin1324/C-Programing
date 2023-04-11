#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	double x;  // 기온
	int y;     //날짜

	printf("일최고 체감온도를 입력해 주세요:  \n");
	scanf("%lf", &x);
	printf("예상 지속 일수:  \n");
	scanf("%d", &y);

	if (x >= 33 and x < 35 and y >= 2)
	{
		printf("폭염주의보 \n");

	}
	else if (x >= 35.0 and y >= 2)
	{
		printf("폭염경보\n");

	}
	else
	{
		printf("폭염주의보, 폭염경보 소식이 없습니다. \n");
	}

}