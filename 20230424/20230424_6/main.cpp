#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n = 0;
	int result = 0;
	printf("n�� ���� �Է��Ͻÿ�: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		result += i * i;
	}
	printf("��갪�� %d�Դϴ�", result);
	return 0;
}
