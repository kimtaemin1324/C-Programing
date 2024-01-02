#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �ĺ��� �� ���ݼ� �̻��� ǥ�� ȹ���� �ĺ��� ã�� �Լ�
int solution(int n, int votes[], int votes_len) {
    // �� �ĺ����� ǥ ���� ������ �迭 �ʱ�ȭ
    int arr[101] = { 0, };

    // �� �ĺ��ڿ� ���� ǥ �� ī��Ʈ
    for (int i = 0; i < votes_len; i++) {
        arr[votes[i]]++;
    }

    // � �ĺ��ڰ� ��ü ǥ�� ���ݼ� �̻��� ȹ���ߴ��� Ȯ��
    for (int i = 1; i < n + 1; i++) {
        if (arr[i] > votes_len / 2) {
            // ���� � �ĺ��ڰ� ���ݼ� �̻��� ǥ�� ȹ���ߴٸ� �ش� �ĺ����� ��ȣ ��ȯ
            return i;
        }
    }

    // ���ݼ� �̻��� ǥ�� ȹ���� �ĺ��ڰ� ���ٸ� -1 ��ȯ
    return -1;
}

int main() {
    // ù ��° �׽�Ʈ ���̽�
    int n1 = 3;
    int votes1[7] = { 1, 2, 1, 3, 1, 2, 1 };
    int votes_len1 = 7;
    int ret1 = solution(n1, votes1, votes_len1);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret1);

    // �� ��° �׽�Ʈ ���̽�
    int n2 = 2;
    int votes2[7] = { 2, 1, 2, 1, 2, 2, 1 };
    int votes_len2 = 7;
    int ret2 = solution(n2, votes2, votes_len2);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret2);
}