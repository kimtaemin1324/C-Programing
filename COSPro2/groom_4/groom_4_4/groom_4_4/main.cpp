#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �� ���� �л� �� �迭(classes)�� �� �ݴ� �ִ� �л� ��(m)�� ����Ͽ� �� �ʿ��� ���� ���� ����ϴ� �Լ�
int solution(int classes[], int classes_len, int m) {
    int answer = 0;

    // �� ���� �л� ���� �ݺ��ϸ鼭 ���� �� ���
    for (int i = 0; i < classes_len; i++) {
        answer += classes[i] / m; // �ش� ���� �л� ���� m���� ���� ���� ����

        // ���� �ش� ���� �л� ���� m���� ���� �������� 0�� �ƴϸ�(�������� ������)
        if (classes[i] - m != 0)
            answer++; // �߰��� ������ �ʿ���
    }

    return answer; // �� �ʿ��� ���� �� ��ȯ
}

int main() {
    // ���� �Է�
    int classes[] = { 80, 45, 33, 20 };
    int m = 30;

    // solution �Լ� ȣ�� �� ��� ���
    int ret = solution(classes, 4, m);
    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}
