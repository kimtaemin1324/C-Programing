#include <stdio.h>
#include <stdlib.h>

// 예제를 위한 구조체 정의
struct Point {
    int x, y;
};

int main() {
    struct Point* p;

    // 구조체 동적 할당
    p = (struct Point*)malloc(sizeof(struct Point));

    // 값 설정
    p->x = 10;
    p->y = 20;

    // 값 출력
    printf("x: %d, y: %d\n", p->x, p->y);

    // 동적으로 할당된 메모리 해제
    free(p);

    return 0;
}