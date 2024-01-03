#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// ������ ũ�� �迭�� ������� ũ�Ⱑ 3���� ū ���ǰ� ũ�Ⱑ 3 ������ ������ ���Ͽ� ū ���� ��ȯ�ϴ� �Լ�
int solution(int stuffs[], int stuffs_len) {
    int answer = 0;

    // ũ�Ⱑ 3���� ū ������ ���� �����ϴ� ����
    int general_counter = 0;

    // ũ�Ⱑ 3 ������ ������ ���� �����ϴ� ����
    int small_counter = 0;

    // �迭�� ��ȸ�ϸ鼭 ũ�Ⱑ 3���� ū ���ǰ� ũ�Ⱑ 3 ������ ������ �����Ͽ� ���� ���
    for (int i = 0; i < stuffs_len; i++) {
        if (stuffs[i] > 3)
            general_counter += stuffs[i];
        else
            small_counter += stuffs[i];
    }

    // ũ�Ⱑ 3���� ū ���ǰ� ũ�Ⱑ 3 ������ ���� �� ū ���� ���� ����� ����
    if (small_counter > general_counter)
        answer = small_counter;
    else
        answer = general_counter;

    return answer;
}

int main() {
    // ������ ũ�� �迭
    int stuffs[6] = { 5, 3, 4, 2, 3, 2 };
    int stuffs_len = 6;

    // solution �Լ��� ȣ���ϰ� ��ȯ���� ���
    int ret = solution(stuffs, stuffs_len);
    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);

    return 0;
}
