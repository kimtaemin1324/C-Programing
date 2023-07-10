//한라대학교 미래모빌리티공학과 202315005 김태민(2023.07.10.)

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
        printf("학생 %d 성적을 입력입력하세요 : ", i + 1);
        scanf("%d", &score[i]);
    }

    for (i = 0; i < 6; i++)
    {
        sum += score[i];
    }

    printf("합계 : %d\n", sum);
    printf("평균 : %.2lf\n", (double)sum / 6);
    printf("\n score[6]에 저장되어있는 숫자:\n");

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

    printf("이름을 입력하세요: ");
    scanf("%s", &string3);

    printf("%s\n", string1);
    printf("%s\n", string2);
    printf("%s %s %s님 안녕하세요 \n", string1, string2, string3);

    return 0;
}
*/