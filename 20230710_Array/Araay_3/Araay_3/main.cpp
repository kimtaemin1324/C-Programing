//�Ѷ���б� �̷������Ƽ���а� 202315005 ���¹�(2023.07.10.)

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



1.
void main()
{
    printf("\n");
    int score[10] = { 100, 95, 85, 77, 66, 55, 67, 78, 89, 100 };
    int a;
    for (a = 0; a < 10; a++)
    {
        printf("%d ", score[a]);
    }
    printf("\n");
}*/


/*
2.
void main()
{
    int score[6];
    int i, a,
        sum = 0;

    for (i = 0; i < 6; i++) {
        printf("�л� %d ������ �Է��Է��ϼ��� : ", i + 1);
        scanf("%d", &score[i]);
    }

    for (i = 0; i < 6; i++)
    {
        sum += score[i];
    }

    printf("�հ� : %d\n", sum);
    printf("��� : %.2lf\n", (double)sum / 6);
    printf("\n score[6]�� ����Ǿ��ִ� ����:\n");

    for (a = 0; a < 6; a++)
    {
        printf(" %d", score[a]);
    }
}*/


/*
3.
int main()
{
    char string1[6] = { 'H', 'e', 'l', 'l', 'o' };
    char string2[6] = "world";
    char string3[10];

    printf("�̸��� �Է��ϼ���: ");
    scanf("%s", &string3);

    printf("%s\n", string1);
    printf("%s\n", string2);
    printf("%s %s %s�� �ȳ��ϼ��� \n", string1, string2, string3);

    return 0;
}
*/