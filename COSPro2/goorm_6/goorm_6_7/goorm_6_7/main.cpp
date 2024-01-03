#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �־��� ���� ������ ���� ��� ���� ������ ã�� ��ȯ�ϴ� �Լ�
int solution(int money, int chairs[], int chairs_len, int desks[], int desks_len) {
    int answer = 0;

    // ��� ���ڿ� å���� ������ Ȯ���ϸ鼭
    for (int i = 0; i < chairs_len; i++) {
        for (int j = 0; j < desks_len; j++) {
            int price = chairs[i] + desks[j];

            // ��������� �ְ� ���ݺ��� �����鼭 ���� ���� �ִ� ���
            if (answer < price && price <= money)
                answer = price; // �ְ� ������ ������Ʈ
        }
    }

    return answer; // ���� ��� ���� ������ ������ ��ȯ
}

int main() {
    // ù ��° �׽�Ʈ ���̽�
    int money1 = 7;
    int chairs1[] = { 2, 5 };
    int chairs_len1 = 2;
    int desks1[] = { 4, 3, 5 };
    int desks_len1 = 3;
    int ret1 = solution(money1, chairs1, chairs_len1, desks1, desks_len1);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret1);

    // �� ��° �׽�Ʈ ���̽�
    int money2 = 7;
    int chairs2[] = { 3 };
    int chairs_len2 = 1;
    int desks2[] = { 5 };
    int desks_len2 = 1;
    int ret2 = solution(money2, chairs2, chairs_len2, desks2, desks_len2);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret2);

    return 0;
}
