#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("배열 크기 입력: ");
    scanf("%d", &n);

    // 정수 배열 동적 할당
    int* arr = (int*)malloc(n * sizeof(int));

    // 할당된 배열에 값을 저장
    for (int i = 0; i < n; i++) {
        arr[i] = i * 2;
    }

    // 배열의 내용 출력
    printf("할당된 배열: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // 동적으로 할당된 메모리 해제
    free(arr);

    return 0;
}