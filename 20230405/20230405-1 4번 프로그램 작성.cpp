#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int cm, ft;
	double inch;

	printf("Ű�� �Է��ϼ���(cm): ");
	scanf("%d", &cm);

	inch = double(cm) / 2.54;
	ft = inch / 12;
	inch = inch - double(ft) * 12;

	printf("%dcm�� %d��Ʈ %lf��ġ�Դϴ�.\n", cm, ft, inch);

		return 0;
}
