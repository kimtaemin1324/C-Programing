#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    printf("ī������ �ʱⰪ�� �Է��Ͻÿ� : ");
    scanf("%d", &n);

    for (int i = n; i >= 0; i--)
    {
        printf("%d ", i);
    }
    printf("\a");
    return 0;
}