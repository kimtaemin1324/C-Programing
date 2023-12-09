#include <stdio.h>
#include <stdlib.h>

int main() {
    int* dynamicArray = NULL;
    int size, newValue;

    // �迭 �ʱ� ũ�� ����
    size = 5;
    dynamicArray = (int*)malloc(size * sizeof(int));

    // �迭�� �� ����
    for (int i = 0; i < size; i++) {
        dynamicArray[i] = i;
    }

    // �迭�� ���� ���
    printf("�Ҵ�� �迭: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", dynamicArray[i]);
    }
    printf("\n");

    // �迭 ũ�⸦ �� ��� ����
    size *= 2;
    dynamicArray = (int*)realloc(dynamicArray, size * sizeof(int));

    // �߰��� �� ����
    for (int i = size / 2; i < size; i++) {
        dynamicArray[i] = i;
    }

    // ���ο� �迭�� ���� ���
    printf("ũ�Ⱑ ������ �迭: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", dynamicArray[i]);
    }
    printf("\n");

    // �������� �Ҵ�� �޸� ����
    free(dynamicArray);

    return 0;
}