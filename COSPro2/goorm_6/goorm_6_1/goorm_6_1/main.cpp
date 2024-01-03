#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �־��� �µ� �迭���� A�� B �ε��� ������ ���� �߿��� A�� B���� ū ������ ������ ����ϴ� �Լ�
int solution(int temperature[], int temperature_len, int A, int B) {
    int answer = 0;

    // A���� B-1���� �ݺ��ϸ鼭 A�� B���� ū ������ ã�� ������ ����
    for (int i = A; i < B; i++) {
        if (temperature[i] > temperature[A] && temperature[i] > temperature[B]) {
            answer++;
        }
    }

    return answer;
}

int main() {
    // �׽�Ʈ ���̽��� ���� �µ� �迭�� �ε���
    int temperature[] = { 3, 2, 1, 5, 4, 3, 3, 2 };
    int temperature_len = 8;
    int A = 1;
    int B = 6;

    // solution �Լ��� ȣ���ϰ� ��ȯ���� ���
    int ret = solution(temperature, temperature_len, A, B);
    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);

}
