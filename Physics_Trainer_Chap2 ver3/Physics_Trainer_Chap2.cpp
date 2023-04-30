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


void Excersize_2_23(int solution, int answer)
{
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



	printf("2-23 \n");
	printf("�����ϴ� ���� ���̰� %6.2lf m �� â���� �������� �� %6.2lf s �ɸ���.\n\n", height, time);
	printf("���� â���� ����⿡�� �󸶳� ���� ������ �������°�?\n");


	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("==============================  Ǯ��  ===================================\n");
		a = 0.5 * gravitational_acceleration * time * time;
		v0 = v0 * time * 0.5 * gravitational_acceleration * (time * time);
		��y = spe3 / 2 * gravitational_acceleration;

		printf("���� ������ ��ӵ� � ����(�������Ͽ)�̴�.\n");
		printf("��ӵ� � ������ ��y = v0 x t + 1/2 x a x t^2 �� v^2 - v0^2 = 2 x a x ��y �� �ִ�.\n");
		printf("���� ��y = v0 x t + 1/2 x a x t^2�� Ȱ���Ͽ� â���� ����⿡���� �ӵ��� �����ֱ����� v0�� �����ش�.\n\n");
		printf("��y�� ��ġ�� ��ȭ��, v0�� ó�� �ӵ�, a�� ���ӵ� , t�� �ð��̴�.\n");
		printf("��y�� ��ġ�� ��ȭ������ â���� ������ %6.2lf m �̴�.\n", height);
		printf("�������Ͽ�̹Ƿ� ���ӵ� a�� �߷°��ӵ� g�� ���Ѵ�.\n");
		printf("���ӵ� a: -%6.2lfm/s^2\n", gravitational_acceleration);
		printf("t�� ���� â�� �������� �������� �ð����� %6.2lf s �̴�.\n", time);
		printf("��y, g, t�� �� �Ŀ� �����Ͽ� v0�� �����ݴϴ�.\n");
		printf("�� �Ŀ� �����ϸ� %6.2lf m = v0 x %6.2lf s + 1/2 x -%6.2lf m/s^2 x (%6.2lf s)^2 �̴�.\n", height, time, gravitational_acceleration, time); 
		printf("�� v0 = %6.3lfm\n\n\n", v0 * time + c * gravitational_acceleration * (time * time));
		printf("   v0=0m/s\n");
		printf("y    ----\n");
		printf("       |    vo1\n");
		printf("       |  --    --------------  _    ___     \n");
		printf("       |  |     |      |     | |_|    |      \n");
		printf("       |  |     |------|-----|        | ��y = 2.2m    \n"); 
		printf("       |  |     |      |     |        |   t = 0.3s    \n"); 
		printf("       |  |     |------|-----|        |      \n");
		printf("       |  |     |      |     |  _     |      \n"); 
		printf("       |  |     |      |     | |_|    |      \n"); 
		printf("       |  --    --------------       ---     \n");
		printf("y=0  ----\n");
		printf("     ////\n");
        printf("(b) ��y�� ���� ���ΰ��� ? \n");
		printf("�ð��� �𸣰� ������ a, v, v0�� �˰� ���� �� ������ ���ϴ� ��ӵ� � ������ v^2 - v0^2 = 2 x a x ��y�� Ȱ���Ͽ� â�� ����� ���� ���� ���� v0�� �����ش�.\n\n");
		printf("���ӵ� 2a: %6.2lf\n", d * gravitational_acceleration);
		printf("v01^2�� ��y�� ���� ���⿡ %6.3lf m �̴�.\n", spe3);
		printf("v01^2, 2a, v0^2�� �� �Ŀ� �����Ͽ� ��y�� �����ݴϴ�.\n");
		printf("�� �Ŀ� �����ϸ� %6.3lf - (%6.2lf)^2 = 2 x %6.2lf x ��y�̴�.\n", spe3, (v0 * v0), gravitational_acceleration);
		printf("�� ��y = %6.2lfm\n", spe3 / 2 * gravitational_acceleration);






		printf("=================================================================\n");
		printf("\n\n\n");

	}

	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n");


		printf("v0�� ���� ���ΰ� ? \n");
		printf("v0�� ���� ���մϴ�\n");
		printf("v0�� ���� ������ �����ϴ�. = %6.3lfm \n\n", spe3);
		v0 = v0 * time * 0.5 * gravitational_acceleration * (time * time);


		printf("��y�� ���� ���ΰ� ? ,\n");
		printf("v0�� ���� ���մϴ�\n");
		printf("��y�� ���� ������ �����ϴ�. = %6.2lfm\n", spe5);
		��y = spe3 / 2 * gravitational_acceleration;


		printf("\n\n\n");
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