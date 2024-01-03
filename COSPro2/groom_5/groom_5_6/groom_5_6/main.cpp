#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �ѱ���� ���� ������ ������� ���� ������ ����ϰ� Ư�� ���ǿ� ���� ���� ����� ��ȯ�ϴ� �Լ�
int solution(int korean, int english) {
    int answer = 0;

    // ���� ���� ���
    int math = 210 - (korean + english);

    // ���� ������ 100���� ũ�� -1�� ��ȯ, �׷��� ������ ���� ���� ���� ��ȯ
    if (math > 100)
        answer = -1;
    else
        answer = math;

    return answer;
}

int main() {
    // �ѱ���� ���� ����
    int korean = 70;
    int english = 60;

    // solution �Լ��� ȣ���ϰ� ��ȯ���� ���
    int ret = solution(korean, english);
    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);

    return 0;
}
