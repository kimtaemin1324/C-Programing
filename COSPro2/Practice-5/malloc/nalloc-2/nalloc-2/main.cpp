#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char* name;

    // ���ڿ� ���� �Ҵ�
    name = (char*)malloc(20 * sizeof(char));

    // ����ڷκ��� �̸� �Է�
    printf("�̸� �Է�: ");
    scanf("%s", name);

    // �Էµ� �̸� ���
    printf("�Էµ� �̸�: %s\n", name);

    // �������� �Ҵ�� �޸� ����
    free(name);

    return 0;
}