#include <stdio.h>
#include <stdlib.h>

int main() {
    int* dynamicArray = NULL;
    int size, newValue;

    // 배열 초기 크기 설정
    size = 5;
    dynamicArray = (int*)malloc(size * sizeof(int));

    // 배열에 값 설정
    for (int i = 0; i < size; i++) {
        dynamicArray[i] = i;
    }

    // 배열의 내용 출력
    printf("할당된 배열: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", dynamicArray[i]);
    }
    printf("\n");

    // 배열 크기를 두 배로 증가
    size *= 2;
    dynamicArray = (int*)realloc(dynamicArray, size * sizeof(int));

    // 추가로 값 설정
    for (int i = size / 2; i < size; i++) {
        dynamicArray[i] = i;
    }

    // 새로운 배열의 내용 출력
    printf("크기가 증가한 배열: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", dynamicArray[i]);
    }
    printf("\n");

    // 동적으로 할당된 메모리 해제
    free(dynamicArray);

    return 0;
}