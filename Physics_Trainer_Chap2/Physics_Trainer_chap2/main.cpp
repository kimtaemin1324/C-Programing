#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 




void Excersize_2_4(int solution, int answer)
{

	double a_average_velocity = 10;
	double b_Instantaneous_speed = 15;

	printf("\n\n");
	printf("2-4 \n");
	printf("����� ���� �����ϰ� �ִ� ��ü�� ���� �������� ������� �� ��,\n");
	printf("��ü�� �̵��Ÿ��� �ð��� ���谡 �׸� P2-4�� ����.\n\n");
	printf("(a) ����Ͽ� %.0lf s ���� ��ü�� ��ռӷ��� �� m/s�ΰ�?\n\n", a_average_velocity);

	printf("(b) ��� �� %.0lf s ���� �����ӷ��� �� m/s�ΰ�?\n\n", b_Instantaneous_speed);


}


void Excersize_2_14(int solution, int answer)
{

	double speed = 30;
	double acceleration = 3.0;


	printf("\n\n");
	printf("2-14 \n");
	printf("�����Ⱑ �̷��ϱ� ���ؼ��� �ӷ��� %.0lf m/s�� �����ؾ� �Ѵ�.\n", speed);
	printf("%.1lf m/s^2���� �����ϰ� �����Ѵٸ�\n\n", acceleration);
	printf("�̷��ӵ��� �����ϱ� ���ؼ� ���� Ȱ�ְŸ��� �ʿ��Ѱ�?\n\n");


}


void Excersize_2_24(int solution, int answer)
{

	double height = 39.2;
	double second_velocity = 5;


	printf("\n\n");
	printf("2-24 \n");
	printf("���̰� %.1lf m�� 10�� ���󿡼�\n", height);
	printf("���� ����������� �ʼӵ� %.0lf m/s�� ������.\n\n", second_velocity);
	printf("(a) ���� ���鿡 �������� �� �ɸ��� �ð��� ���ΰ�?\n\n");

	printf("(b) ���� �ǹ����� �������� ���� �Ÿ��� �������°�?\n\n");


}



int main(void)
{

	printf("=================================================================\n");
	printf("======================= Halla University ========================\n");
	printf("======================= Future Mobility  ========================\n");
	printf("======================== Pysics Trainer  ========================\n");
	printf("========================   Chapter 2     ========================\n");
	printf("=================================================================\n");


	Excersize_2_4(0, 0);
	Excersize_2_14(0, 0);
	Excersize_2_24(0, 0);
}