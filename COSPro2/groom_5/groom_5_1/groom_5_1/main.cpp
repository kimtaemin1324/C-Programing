#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// ��ٸ��� ������ �� �� �÷��̾��� ���� ��ġ�� ã�� �Լ�
int solution(int ladders[][2], int ladders_len, int win) {
    int answer = 0;

    // ���� ���� �÷��̾� ��ġ�� ��Ÿ���� �迭
    int player[6] = { 1, 2, 3, 4, 5, 6 };

    // �� ��ٸ��� ���� �÷��̾� ��ġ�� ��ȯ
    for (int i = 0; i < ladders_len; i++) {
        int temp = player[ladders[i][0] - 1];
        player[ladders[i][0] - 1] = player[ladders[i][0]];
        player[ladders[i][0]] = temp;
    }

    // �̱���� �÷��̾��� ���� ��ġ�� ������
    answer = player[win - 1];

    // ���� ��ġ�� ��ȯ
    return answer;
}

int main() {
    // ���忡 �ִ� ��ٸ��� ��Ÿ���� �迭
    int ladders[5][2] = { {1, 2}, {3, 4}, {2, 3}, {4, 5}, {5, 6} };
    int ladders_len = 5;
    int win = 3;

    // solution �Լ��� ȣ���ϰ� ��ȯ���� ���
    int ret = solution(ladders, ladders_len, win);
    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}