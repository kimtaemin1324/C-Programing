#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// a�� ��� �߿��� b�� ������ �������� ù ��° ���� ã�� �Լ�
int solution(int a, int b) {
    int answer = 0;

    // 1���� b���� �ݺ��ϸ鼭 a�� ��� �߿��� b�� ������ �������� ���� ã��
    for (int i = 1; i <= b; i++) {
        if ((a * i) % b == 0) {
            answer = a * i;
            break;  // ã������ �ݺ��� ����
        }
    }

    return answer;
}

int main() {
    // �� ���� a�� b
    int a = 4;
    int b = 6;

    // solution �Լ��� ȣ���ϰ� ��ȯ���� ���
    int ret = solution(a, b);
    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);

    return 0;
}
