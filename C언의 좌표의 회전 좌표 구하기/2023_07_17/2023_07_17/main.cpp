#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>


void rotateCoordinates(double x, double y, double angle_degree, double* x_new, double* y_new)
{

    double angle_radian = angle_degree * M_PI / 180.0;


    *x_new = x * cos(angle_radian) - y * sin(angle_radian);
    *y_new = x * sin(angle_radian) + y * cos(angle_radian);
}

int main()
{
    double x, y, angle_degree;

    printf("x��ǥ:\n");
    scanf("%f", &x);

    printf("y��ǥ :\n");
    scanf("%f", &y);

    printf("ȸ�� ����: \n");
    scanf("%f", &angle_degree);

    double x_new, y_new;
    rotateCoordinates(x, y, angle_degree, &x_new, &y_new);

    printf("��ȯ�� ��ǥ:  x = %f, y = %f\n", x_new, y_new);


    return 0;
}