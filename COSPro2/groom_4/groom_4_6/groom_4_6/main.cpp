#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �־��� ����Ʈ�� ���� Ư�� ������ �����ϴ� ���� ��ȯ�ϴ� �Լ�
int solution(int point) {
    if (point < 1000)
        return 0; // ����Ʈ�� 1000 �̸��̸� 0�� ��ȯ
    return point / 100 * 100; // �� ���� ���, ����Ʈ�� 100���� ���� �� 100�� ���Ͽ� ��ȯ
}

int main() {
    // ���� �Է�
    int point = 2323;

    // solution �Լ� ȣ�� �� ��� ���
    int ret = solution(point);
    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}