#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// ���츮�� ������ ã�� �Լ�
int solution(int height[][4], int height_len) {
    int count = 1; // ���츮�� ������ ������ ������ 1�� �ʱ�ȭ (ù ��° ���츮�� �̹� ī��Ʈ��)

    // ���� ������ ����Ͽ� 2���� �迭�� �� ���Ҹ� �˻�
    for (int i = 0; i < height_len; i++) {
        for (int j = 0; j < height_len; j++) {
            // ���� ��ġ�� ���̰� �ֺ����� �۴ٸ� (���츮���)
            if (height[i][j] < height[i][j - 1] && height[i][j] < height[i + 1][j] &&
                height[i][j] < height[i][j + 1] && height[i][j] < height[i - 1][j]) {
                count++; // ���츮 ������ ������Ŵ
            }
        }
    }
    return count; // �������� ���츮 ���� ��ȯ
}

int main() {
    // 2���� �迭�� �����ϰ� �ʱ�ȭ
    int height[4][4] = { {3, 6, 2, 8}, {7, 3, 4, 2}, {8, 6, 7, 3}, {5, 3, 2, 9} };
    int height_len = 4; // �迭�� ũ��

    // solution �Լ� ȣ��
    int ret = solution(height, height_len);

    // ��� ���
    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}