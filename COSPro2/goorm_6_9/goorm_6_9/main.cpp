#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �縻 ���� ����ϴ� �Լ�
int solution(int socks[], int socks_len) {
    int answer = 0;

    // �� �縻 �������� ������ ������ �迭 ���� �� �ʱ�ȭ
    int* count = (int*)malloc(sizeof(int) * 10);
    memset(count, 0, sizeof(int) * 10);

    // �� �縻�� �������� ������ ī��Ʈ
    for (int i = 0; i < socks_len; i++)
        count[socks[i]]++;

    // �� �縻 �������� �ʿ��� �ּ����� �縻 �� ���
    for (int i = 0; i < 10; i++)
        answer += (count[i] % 2); // Ȧ�� ������ �縻�̸� 1�� ����

    return answer;
}

int main() {
    // �׽�Ʈ ���̽�
    int socks[] = { 1, 2, 1, 3, 2, 1 };
    int socks_len = 6;
    int ret = solution(socks, socks_len);

    // ��� ���
    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);

    return 0;
}
