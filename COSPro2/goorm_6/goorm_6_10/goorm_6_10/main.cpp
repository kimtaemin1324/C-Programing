#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �־��� ���Ը� ���� ���� �迭���� ��� ������ ������ ����� ������ ���� ����ϴ� �Լ�
int solution(int weight, int boxes[], int boxes_len) {
    int answer = 0;

    // �� ���ڸ� ��ȸ�ϸ鼭 ��� ������ ������ ����� ������ ���� ī��Ʈ
    for (int i = 0; i < boxes_len; i++)
        if (weight * 1.1 < boxes[i] || weight * 0.9 > boxes[i])
            answer++;

    return answer;
}

int main() {
    // �׽�Ʈ ���̽�
    int weight = 600;
    int boxes[5] = { 653, 670, 533, 540, 660 };
    int boxes_len = 5;

    // solution �Լ� ȣ�� �� ��� ���
    int ret = solution(weight, boxes, boxes_len);
    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);

    return 0;
}
