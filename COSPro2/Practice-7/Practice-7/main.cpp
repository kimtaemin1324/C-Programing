#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �־��� �Ű������� ������� �ַ���� ����ϴ� �Լ�
int solution(int num_apple, int num_carrot, int k) {
    int answer = 0;

    // ���ǿ� ���� �ʱ� ���� ����մϴ�.
    if (num_apple < 3 * num_carrot)
        answer = num_apple / 3;
    else
        answer = num_carrot;

    // ���� ����� ����� ������Ʈ�մϴ�.
    num_apple -= 3 * answer;
    num_carrot -= answer;

    // ������ ���� k ������ ����� �����մϴ�.
    for (int i = 0; k - (num_apple + num_carrot + i) > 0; i++)
        if (i % 4 == 0)
            answer--;

    // �������� ���� ��ȯ�մϴ�.
    return answer;
}

// ���� �Լ�
int main() {
    // ù ��° �׽�Ʈ ���̽�
    int num_apple1 = 5;
    int num_carrot1 = 1;
    int k1 = 2;
    int ret1 = solution(num_apple1, num_carrot1, k1);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret1);

    // �� ��° �׽�Ʈ ���̽�
    int num_apple2 = 10;
    int num_carrot2 = 5;
    int k2 = 4;
    int ret2 = solution(num_apple2, num_carrot2, k2);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret2);
}