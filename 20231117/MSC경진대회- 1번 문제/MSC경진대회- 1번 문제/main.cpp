#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI�� ����ϱ� ���ؼ� �߰�
#include <math.h>
#include <time.h>

#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 


#define DEG2RAD(x)  x*M_PI/180.
#define RAD2DEG(x)  x*180/M_PI

void Excersize_MSC_1(int solution, int answer) //�Ѷ���б� �̷������Ƽ���а� ���¹�
{
    srand(time(NULL));

    double Ax = 3.00 + rand() % (5 + 1) - 1;
    double Ay = 45.0 + rand() % (10 + 1) - 2;
    double Bx = 6.00 + rand() % (5 + 1) - 1;
    double By = -60.0 + rand() % (10 + 1) - 2;
    double x1, x2, y1, y2;
    double distance;

    printf("%5.2lf\n", Ax);
    printf("%5.2lf\n", Ay);
    printf("%5.2lf\n", Bx);
    printf("%5.2lf\n", By);

    x1 = Ax * cos(DEG2RAD(Ay));
    y1 = Ax * sin(DEG2RAD(Ay));
    x2 = Bx * cos(DEG2RAD(By));
    y2 = Bx * sin(DEG2RAD(By));

    printf("\n\n");
    printf("2 - 21\n");
    printf("����ǥ�迡�� (r, ��) = (3.00m, 45.0��)�� (6.00m, -60.0��)�̴�.\n");
    printf("�� �� ������ �Ÿ��� ���϶�.\n");

    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("�� �� ������ �Ÿ��� ���϶�.\n\n");

        printf("���� ������  AB = ��((x1 - x2)^2 + (y1 - y2)^2)\n");
        printf("AB: A���� B�� ������ �Ÿ�, x1: ��A�� x��ǥ, x2: ��B�� x��ǥ, y1: ��A�� y��ǥ, y2: ��B�� y��ǥ\n\n");

        printf("A(%5.2lfm , %5.2lf��)\n", Ax, Ay);
        printf(" = (r * cos��, r * sin��)\n");
        printf(" = (%5.2lfm * cos(%5.2lf��), %5.2lfm * sin(%5.2lf��))\n", Ax, Ay, Ax, Ay);
        printf(" = (%5.2lf, %5.2lf)\n\n", x1, y1);

        printf("B(%5.2lfm , %5.2lf��)\n", Bx, By);
        printf(" = (r * cos��, r * sin��)\n");
        printf(" = (%5.2lfm * cos(%5.2lf��), %5.2lfm * sin(%5.2lf��))\n", Bx, By, Bx, By);
        printf(" = (%5.2lf, %5.2lf)\n\n", x2, y2);

        printf("D = ��((x1 - x2)^2 + (y1 - y2)^2)\n");
        printf("  = ��((%5.2lf - %5.2lf)^2 + (%5.2lf - %5.2lf)^2)\n", x1, x2, y1, y2);
        distance = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
        printf("  = %5.2lf\n\n", distance);

    }
    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
        printf("�� �� ������ �Ÿ�: %5.2lfm\n\n", distance);


    }
}

int main(void)
{

    printf("=================================================================\n");
    printf("======================= Halla University ========================\n");
    printf("======================= Future Mobility  ========================\n");
    printf("========================= MSC Contest  ==========================\n");
    printf("========================   Chapter 2     ========================\n");
    printf("=================================================================\n");

    Excersize_MSC_1(1, 1);
}