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
	double Δy = 0;



	printf("2-23 \n");
	printf("낙하하는 돌이 높이가 %6.2lf m 인 창문을 지나가는 데 %6.2lf s 걸린다.\n\n", height, time);
	printf("돌은 창문의 꼭대기에서 얼마나 높은 곳에서 떨어졌는가?\n");


	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("==============================  풀이  ===================================\n");
		a = 0.5 * gravitational_acceleration * time * time;
		v0 = v0 * time * 0.5 * gravitational_acceleration * (time * time);
		Δy = spe3 / 2 * gravitational_acceleration;

		printf("관련 공식은 등가속도 운동 공식(자유낙하운동)이다.\n");
		printf("등가속도 운동 공식은 Δy = v0 x t + 1/2 x a x t^2 와 v^2 - v0^2 = 2 x a x Δy 가 있다.\n");
		printf("먼저 Δy = v0 x t + 1/2 x a x t^2를 활용하여 창문의 꼭대기에서의 속도를 구해주기위해 v0를 구해준다.\n\n");
		printf("Δy는 위치의 변화량, v0는 처음 속도, a는 가속도 , t는 시간이다.\n");
		printf("Δy는 위치의 변화량으로 창문의 높이인 %6.2lf m 이다.\n", height);
		printf("자유낙하운동이므로 가속도 a가 중력가속도 g로 변한다.\n");
		printf("가속도 a: -%6.2lfm/s^2\n", gravitational_acceleration);
		printf("t는 돌이 창문 꼭대기부터 떨어지는 시간으로 %6.2lf s 이다.\n", time);
		printf("Δy, g, t를 위 식에 대입하여 v0를 구해줍니다.\n");
		printf("위 식에 대입하면 %6.2lf m = v0 x %6.2lf s + 1/2 x -%6.2lf m/s^2 x (%6.2lf s)^2 이다.\n", height, time, gravitational_acceleration, time); 
		printf("∴ v0 = %6.3lfm\n\n\n", v0 * time + c * gravitational_acceleration * (time * time));
		printf("   v0=0m/s\n");
		printf("y    ----\n");
		printf("       |    vo1\n");
		printf("       |  --    --------------  _    ___     \n");
		printf("       |  |     |      |     | |_|    |      \n");
		printf("       |  |     |------|-----|        | Δy = 2.2m    \n"); 
		printf("       |  |     |      |     |        |   t = 0.3s    \n"); 
		printf("       |  |     |------|-----|        |      \n");
		printf("       |  |     |      |     |  _     |      \n"); 
		printf("       |  |     |      |     | |_|    |      \n"); 
		printf("       |  --    --------------       ---     \n");
		printf("y=0  ----\n");
		printf("     ////\n");
        printf("(b) Δy의 값은 얼마인가요 ? \n");
		printf("시간은 모르고 있지만 a, v, v0를 알고 있을 때 변위를 구하는 등가속도 운동 공식인 v^2 - v0^2 = 2 x a x Δy을 활용하여 창문 꼭대기 보다 높은 곳인 v0을 구해준다.\n\n");
		printf("가속도 2a: %6.2lf\n", d * gravitational_acceleration);
		printf("v01^2는 Δy의 값과 같기에 %6.3lf m 이다.\n", spe3);
		printf("v01^2, 2a, v0^2를 위 식에 대입하여 Δy를 구해줍니다.\n");
		printf("위 식에 대입하면 %6.3lf - (%6.2lf)^2 = 2 x %6.2lf x Δy이다.\n", spe3, (v0 * v0), gravitational_acceleration);
		printf("∴ Δy = %6.2lfm\n", spe3 / 2 * gravitational_acceleration);






		printf("=================================================================\n");
		printf("\n\n\n");

	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");


		printf("v0의 값은 얼마인가 ? \n");
		printf("v0의 값을 구합니다\n");
		printf("v0의 값은 다음과 같습니다. = %6.3lfm \n\n", spe3);
		v0 = v0 * time * 0.5 * gravitational_acceleration * (time * time);


		printf("Δy의 값은 얼마인가 ? ,\n");
		printf("v0의 값을 구합니다\n");
		printf("Δy의 값은 다음과 같습니다. = %6.2lfm\n", spe5);
		Δy = spe3 / 2 * gravitational_acceleration;


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