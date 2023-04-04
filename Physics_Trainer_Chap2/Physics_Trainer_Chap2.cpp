#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 

void Excersize_2_3(int solution, int answer)
{

	int distance = 408;
	int T0 = 10;
	int hour = 12;
	int min = 37;

	printf("\n\n");
	printf("2-3 \n");
	printf("서울에서 부산까지의 KTX 노선의 거리는 약 %d km이다\n", distance);
	printf("오전 %d 시에 서울역을 출발한 KTX가 %d 시 %d 분 부산역에 도착하였다.\n\n", T0, hour, min);

	printf("열차의 평균속력은 몇 m/s인가?\n");





}

void Excersize_2_13(int solution, int answer)
{

	int sec1 = 7;
	int sec2 = 5;



	printf("\n\n");
	printf("2-13 \n");
	printf("자동차가 직선 도로를 달릴 때의 v-t 그래프이다. \n\n");
	printf("(a) 이 자동차의 a-t 그래프를 그리라. \n\n");
	printf("(b) 자동차가 처음 %d s 동안 이동한 거리는 얼마인가?\n\n", sec1); 
	printf("(c) 이 자동차의 처음 %d s 동안의 평균속도 및 평균가속도는 각각 얼마인가 ?\n\n", sec2);;






}

void Excersize_2_23(int solution, int answer)
{
	double high = 2.2;
	double sec = 0.3;
	


	
	printf("2-23 \n");
	printf("낙하하는 돌이 높이가 %.1lf m 인 창문을 지나가는 데 %.1lf s 걸린다.\n\n", high, sec);
	printf("돌은 창문의 꼭대기에서 얼마나 높은 곳에서 떨어졌는가?\n");
}






int main(void)
{

	printf("=================================================================\n");
	printf("======================= Halla University ========================\n");
	printf("======================= Future Mobility  ========================\n");
	printf("======================== Pysics Trainer  ========================\n");
	printf("========================   Chapter 2     ========================\n");
	printf("=================================================================\n");


	Excersize_2_3(0, 0);
	Excersize_2_13(0, 0);
	Excersize_2_23(0, 0);
	


}