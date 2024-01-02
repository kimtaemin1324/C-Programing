#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// ���� �迭���� Ư�� ���� �̻��� ���� �л��� ���� ���� �Լ�
int solution(int scores[], int scores_len, int cutline) {
    int answer = 0; // Ư�� ���� �̻��� ���� �л��� ���� �����ϴ� ������ �ʱ�ȭ

    // �־��� �迭�� ��ȸ�ϸ鼭 ������ Ư�� ���� �̻��� ��츦 ����
    for (int i = 0; i < scores_len; i++) {
        if (scores[i] >= cutline) {
            answer++; // Ư�� ���� �̻��� ���� �л��̸� answer ����
        }
    }

    return answer; // ���������� Ư�� ���� �̻��� ���� �л��� ���� ��ȯ
}

int main() {
    // �׽�Ʈ������ ���� �迭, �迭�� ����, ���� ���� �� ����
    int scores[5] = { 80, 90, 55, 60, 59 };
    int scores_len = 5;
    int cutline = 60;

    // solution �Լ� ȣ���Ͽ� ��� ���
    int ret = solution(scores, scores_len, cutline);

    // ��� ���
    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}