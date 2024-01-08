#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int search_binaryRecur(int list[], int low, int high, int key) {
    if (low > high)
        return -1;

    int middle = (low + high) / 2;

    if (list[middle] == key)
        return middle;

    if (list[middle] > key)
        return search_binaryRecur(list, low, middle - 1, key);
    else
        return search_binaryRecur(list, middle + 1, high, key);
}

int main(void) {
    int list[18] = { 4, 9, 11, 24, 29, 30, 37, 38, 39, 49, 50, 51, 55, 67, 73, 84, 91, 95 };
    int n;
    int low = 0;
    int high = sizeof(list) / sizeof(list[0]) - 1;

    printf("�迭 ���: ");
    for (int i = 0; i < 18; i++) {
        printf("%d ", list[i]);
    }

    printf("\n\n�迭���� ã�� ������ �Է��ϼ���: ");
    scanf("%d", &n);

    int num = search_binaryRecur(list, low, high, n);

    if (num != -1)
        printf("�ش� ������ �ε��� %d�� �ֽ��ϴ�.\n", num);
    else
        printf("�迭�� �ش� ������ �����ϴ�.\n");

    return 0;
}


