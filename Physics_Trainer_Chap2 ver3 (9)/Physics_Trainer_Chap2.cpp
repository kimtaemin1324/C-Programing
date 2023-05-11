#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI�� ����ϱ� ���ؼ� �߰�
#include <math.h>

#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 


#define DEG2RAD(x)  x*M_PI/180.
#define RAD2DEG(x)  x*180/M_PI


void Excersize_2_23(int solution, int answer) //�Ѷ���б� �̷������Ƽ���а� ���¹�
{

	// ���� ���� ����
	double height = 2.2;
	double time = 0.3;
	double spe3 = 0.441;
	double v1 = 0;
	double v0 = 0;
	double gravitational_acceleration = 9.80;
	double spe5 = 2.16;
	double y = 0;
	double spe2 = 1.8;
	double a = 0;
	double c = 0.5;
	double d = 2.0;
	double ��y = 0;



	printf("2-23 \n\n");
	printf("�����ϴ� ���� ���̰� %6.2lf m �� â���� �������� �� %6.2lf s �ɸ���.\n\n", height, time);
	printf("���� â���� ����⿡�� �󸶳� ���� ������ �������°�?\n");


	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("==============================  Ǯ��  ===================================\n\n\n");
		a = 0.5 * gravitational_acceleration * time * time;
		v0 = v0 * time * 0.5 * gravitational_acceleration * (time * time);
		��y = spe3 / 2 * gravitational_acceleration;


		printf("���� ������ ��y = v0 * t + 1/2 * a * t^2�Դϴ�.\n\n");
		printf("��y:��ġ�� ��ȭ��, v0:ó�� �ӵ�, a:���ӵ� , t:�ð�\n\n");
		printf("�������Ͽ�̹Ƿ� ���ӵ� a�� �߷°��ӵ� g�� ��ȯ.\n\n");
		printf("��y = v01 * t + 1/2 * a * t ^ 2 = %5.2lf m = v0 * %5.2lf s + 1/2 * (-%5.2lf m/s^2) * (%5.2lf s)^2\n\n", height, time, gravitational_acceleration, time);
		printf("v0 = %5.3lfm/s\n\n\n\n\n", spe3);

		printf("���� ������ v ^ 2 - v0 ^ 2 = 2 * a * ��y�Դϴ�.\n\n");
		printf("v:���߼ӵ�, v0:ó���ӵ�, a:���ӵ�, ��y :�Ÿ���ȭ��\n\n");
		printf("v01^2�� ��y�� ���� ���⿡ %6.3lf m/s �� ����\n\n", spe3);
		printf("��y => v ^ 2 - v0 ^ 2 = 2 * a * ��y\n\n");
		printf("%5.3lfm/s - (%5.2lfm/s)^2 = 2 * %5.2lfm/s^2 * ��y\n\n", spe3, (v0 * v0), gravitational_acceleration);
		printf("��y = %5.3lfm/s^2 / (2 * %5.2lf m/s^2)\n\n", spe3, gravitational_acceleration);
		printf("��y = %5.2lfm\n\n\n", spe5);







		printf("=================================================================\n");
		printf("\n\n\n");

	}

	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n\n\n");



		printf("â�� ������� �ʱ� �ӵ� v0 = %5.3lfm/s \n\n", spe3);
		v0 = v0 * time * 0.5 * gravitational_acceleration * (time * time);

		printf("â�� ����� ���� ���� ���� ��y = %5.2lfm\n", spe5);
		��y = spe3 / 2 * gravitational_acceleration;


		printf("\n\n");
		printf("=================================================================\n");
	}









}







int main(void)
{

	printf("=================================================================\n");
	printf("======================= Halla University ========================\n");
	printf("======================= Future Mobility  ========================\n");
	printf("======================== Pysics Trainer  ========================\n");
	printf("========================   Chapter 2     ========================\n");
	printf("=================================================================\n");


	Excersize_2_23(Show_Solution, Answer);
	//Excersize_2_2(1, 0);
	//Excersize_2_12(1, 0);
	//Excersize_2_22(1, 0);



}
	