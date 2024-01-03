#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// papers �迭���� ���ӵ� �������� ����Ͽ� K�� ���� �� �ʿ��� �ּ����� ���� ������ ��ȯ�ϴ� �Լ�
int solution(int papers[], int papers_len, int K) {
    int length = papers_len;

    // papers �迭�� ��ȸ�ϸ鼭 K�� ���� ������ ������ ���
    for (int i = 0; i < papers_len; i++) {
        K -= papers[i]; // ���� ������ ����Ͽ� K�� ����
        if (K <= 0)
            return i; // K�� 0 ���ϰ� �Ǹ� ������� ����� ���� ������ ��ȯ
    }

    return length; // ��� ������ ����Ͽ��� K�� ������ ���ϸ� �迭�� ���̸� ��ȯ
}

int main() {
    // ù ��° �׽�Ʈ ���̽�
    int papers1[] = { 2, 4, 3, 2, 1 };
    int papers_len1 = 5;
    int K1 = 10;
    int ret1 = solution(papers1, papers_len1, K1);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret1);

    // �� ��° �׽�Ʈ ���̽�
    int papers2[] = { 2, 4, 3, 2, 1 };
    int papers_len2 = 5;
    int K2 = 14;
    int ret2 = solution(papers2, papers_len2, K2);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret2);

}
