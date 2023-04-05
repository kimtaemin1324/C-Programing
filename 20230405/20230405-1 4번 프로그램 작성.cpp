#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int cm, ft;
	double inch;

	printf("키를 입력하세요(cm): ");
	scanf("%d", &cm);

	inch = double(cm) / 2.54;
	ft = inch / 12;
	inch = inch - double(ft) * 12;

	printf("%dcm는 %d피트 %lf인치입니다.\n", cm, ft, inch);

		return 0;
}
