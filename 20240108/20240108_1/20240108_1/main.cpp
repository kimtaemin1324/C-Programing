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

    printf("배열 요소: ");
    for (int i = 0; i < 18; i++) {
        printf("%d ", list[i]);
    }

    printf("\n\n배열에서 찾을 정수를 입력하세요: ");
    scanf("%d", &n);

    int num = search_binaryRecur(list, low, high, n);

    if (num != -1)
        printf("해당 정수는 인덱스 %d에 있습니다.\n", num);
    else
        printf("배열에 해당 정수가 없습니다.\n");

    return 0;
}


