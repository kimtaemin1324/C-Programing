#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main()
{
	double V, R1, R2, R3, R4, Vb, Vc, Vbd, Vab, Vad;

	printf("V : ");
	scanf("%lf", &V);

	printf("R1 : ");
	scanf("%lf", &R1);

	printf("R2 : ");
	scanf("%lf", &R2);

	printf("R3 : ");
	scanf("%lf", &R3);

	printf("R4 : ");
	scanf("%lf", &R4);

	Vb = (R2 / (R1 + R2)) * V;
	Vc = (R4 / (R3 + R4)) * V;

	printf("VB = %lf\n", Vb);
	printf("VC = %lf\n", Vc);
	Vbd = ((R1 * R3 - R2 * R4) / ((R1 + R2) * (R3 + R4))) * V;
	printf("VBD = %lf\n", Vbd);
}