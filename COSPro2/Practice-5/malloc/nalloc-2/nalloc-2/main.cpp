#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char* name;

    // 문자열 동적 할당
    name = (char*)malloc(20 * sizeof(char));

    // 사용자로부터 이름 입력
    printf("이름 입력: ");
    scanf("%s", name);

    // 입력된 이름 출력
    printf("입력된 이름: %s\n", name);

    // 동적으로 할당된 메모리 해제
    free(name);

    return 0;
}