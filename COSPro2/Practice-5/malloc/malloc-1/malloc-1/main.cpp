#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("�迭 ũ�� �Է�: ");
    scanf("%d", &n);

    // ���� �迭 ���� �Ҵ�
    int* arr = (int*)malloc(n * sizeof(int));

    // �Ҵ�� �迭�� ���� ����
    for (int i = 0; i < n; i++) {
        arr[i] = i * 2;
    }

    // �迭�� ���� ���
    printf("�Ҵ�� �迭: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // �������� �Ҵ�� �޸� ����
    free(arr);

    return 0;
}