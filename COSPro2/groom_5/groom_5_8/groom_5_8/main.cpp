#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// ���� ��뷮�� ���� ���� ����� ����ϴ� �Լ�
int solution(int usage) {
    int answer = 0;

    // ���� ��뷮�� 30 �̻��� ���
    if (usage > 30)
        answer = 20 * 430 + 10 * 570 + (usage - 30) * 840;
    // ���� ��뷮�� 20 �̻��� ���
    else if (usage > 20)
        answer = 20 * 430 + (usage - 20) * 570;
    // ���� ��뷮�� 20 ������ ���
    else
        answer = usage * 430;

    return answer;
}

int main() {
    // ���� ��뷮
    int usage = 35;

    // solution �Լ��� ȣ���ϰ� ��ȯ���� ���
    int ret = solution(usage);
    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);

    return 0;
}
