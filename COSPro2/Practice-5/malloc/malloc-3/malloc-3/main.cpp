#include <stdio.h>
#include <stdlib.h>

// ������ ���� ����ü ����
struct Point {
    int x, y;
};

int main() {
    struct Point* p;

    // ����ü ���� �Ҵ�
    p = (struct Point*)malloc(sizeof(struct Point));

    // �� ����
    p->x = 10;
    p->y = 20;

    // �� ���
    printf("x: %d, y: %d\n", p->x, p->y);

    // �������� �Ҵ�� �޸� ����
    free(p);

    return 0;
}