#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI를 사용하기 위해서 추가
#include <math.h>

#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 


#define DEG2RAD(x)  x*M_PI/180.
#define RAD2DEG(x)  x*180/M_PI


void Excersize_2_23(int solution, int answer) //한라대학교 미래모빌리티공학과 김태민
{

	// 변수 선언 지역
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
	double Δy = 0;



	printf("2-23 \n\n");
	printf("낙하하는 돌이 높이가 %6.2lf m 인 창문을 지나가는 데 %6.2lf s 걸린다.\n\n", height, time);
	printf("돌은 창문의 꼭대기에서 얼마나 높은 곳에서 떨어졌는가?\n");


	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("==============================  풀이  ===================================\n\n\n");
		a = 0.5 * gravitational_acceleration * time * time;
		v0 = v0 * time * 0.5 * gravitational_acceleration * (time * time);
		Δy = spe3 / 2 * gravitational_acceleration;


		printf("관련 공식은 Δy = v0 * t + 1/2 * a * t^2입니다.\n\n");
		printf("Δy:위치의 변화량, v0:처음 속도, a:가속도 , t:시간\n\n");
		printf("자유낙하운동이므로 가속도 a가 중력가속도 g로 변환.\n\n");
		printf("Δy = v01 * t + 1/2 * a * t ^ 2 = %5.2lf m = v0 * %5.2lf s + 1/2 * (-%5.2lf m/s^2) * (%5.2lf s)^2\n\n", height, time, gravitational_acceleration, time);
		printf("v0 = %5.3lfm/s\n\n\n\n\n", spe3);

		printf("관련 공식은 v ^ 2 - v0 ^ 2 = 2 * a * Δy입니다.\n\n");
		printf("v:나중속도, v0:처음속도, a:가속도, Δy :거리변화량\n\n");
		printf("v01^2는 Δy의 값과 같기에 %6.3lf m/s 와 동일\n\n", spe3);
		printf("Δy => v ^ 2 - v0 ^ 2 = 2 * a * Δy\n\n");
		printf("%5.3lfm/s - (%5.2lfm/s)^2 = 2 * %5.2lfm/s^2 * Δy\n\n", spe3, (v0 * v0), gravitational_acceleration);
		printf("Δy = %5.3lfm/s^2 / (2 * %5.2lf m/s^2)\n\n", spe3, gravitational_acceleration);
		printf("Δy = %5.2lfm\n\n\n", spe5);







		printf("=================================================================\n");
		printf("\n\n\n");

	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n\n\n");



		printf("창문 꼭대기의 초기 속도 v0 = %5.3lfm/s \n\n", spe3);
		v0 = v0 * time * 0.5 * gravitational_acceleration * (time * time);

		printf("창문 꼭대기 보다 높은 곳인 Δy = %5.2lfm\n", spe5);
		Δy = spe3 / 2 * gravitational_acceleration;


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
	