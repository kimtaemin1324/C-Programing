#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �־��� Į�θ� �迭���� �ּ� Į�θ��� �������� �߰��� �ʿ��� Į�θ��� ����ϴ� �Լ�
int solution(int calorie[], int calorie_len) {
    int min_cal = calorie[0]; // �ּ� Į�θ��� �迭�� ù ��° ��ҷ� �ʱ�ȭ
    int answer = 0;

    // �� ������ Į�θ��� ��ȸ�ϸ鼭 �ʿ��� �߰� Į�θ��� ����
    for (int i = 0; i < calorie_len; i++) {
        if (calorie[i] > min_cal)
            answer += calorie[i] - min_cal; // ���� ������ Į�θ��� �ּ� Į�θ����� ũ�� �߰��� �ʿ��� Į�θ��� ����
        else
            min_cal = calorie[i]; // ���� ������ Į�θ��� �ּ� Į�θ����� �۰ų� ������ �ּ� Į�θ��� ����
    }

    return answer; // �� �ʿ��� �߰� Į�θ� ��ȯ
}

int main() {
    // ���� �Է�
    int calorie[] = { 713, 665, 873, 500, 751 };

    // solution �Լ� ȣ�� �� ��� ���
    int ret = solution(calorie, 5);
    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}
