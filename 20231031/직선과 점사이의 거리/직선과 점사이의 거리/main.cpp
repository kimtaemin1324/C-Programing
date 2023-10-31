#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() //거리 구하는 코드
{
    double a, b, x, y;

    printf("직선의 기울기 a를 입력하세요: ");
    scanf("%lf", &a);
    printf("직선의 y 절편 b를 입력하세요: ");
    scanf("%lf", &b);

    printf("점의 x 좌표를 입력하세요: ");
    scanf("%lf", &x);
    printf("점의 y 좌표를 입력하세요: ");
    scanf("%lf", &y);

    double x0 = (x + a * y - a * b) / (a * a + 1);
    double y0 = a * x0 + b;
    double distance = sqrt((x - x0) * (x - x0) + (y - y0) * (y - y0));

    printf("직선과 점 (%.2lf, %.2lf) 사이의 거리는 %.2lf 입니다.\n", x, y, distance);

    return 0;
}

/*
int main() //점(x2,y2) 구하는 코드
{
    double a, b, x, y;

    printf("직선의 기울기 a를 입력하세요: ");
    scanf("%lf", &a);
    printf("직선의 y 절편 b를 입력하세요: ");
    scanf("%lf", &b);

    printf("점의 x 좌표를 입력하세요: ");
    scanf("%lf", &x);
    printf("점의 y 좌표를 입력하세요: ");
    scanf("%lf", &y);

    double distance = fabs(a * x - y + b) / sqrt(a * a + 1);

    double c = y + (1 / a) * x;

    double x2 = (c - b) / (a + 1 / a);
    double y2 = (-1 / a) * x2 + c;

    printf("직선에서의 거리는 %.2lf 입니다.\n", distance);

    printf("수직인 직선과의 교차점은 (%.2lf, %.2lf)입니다.\n", x2, y2);

    return 0;
}
*/