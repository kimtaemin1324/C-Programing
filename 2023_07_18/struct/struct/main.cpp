#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student
{
	char name[20];
	int age;
	double grade[3];
};

int main()
{
	struct student person;

	strcpy(person.name, "KIM Tae Min");
	person.age = 20;
	person.grade[0] = 90;
	person.grade[1] = 85;
	person.grade[2] = 77;

	printf("학생 이름 : %s\n", person.name);
	printf("학생 나이 : %d\n", person.age);
	printf("학생 국어 : %lf\n", person.grade[0]);
	printf("학생 영어 : %lf\n", person.grade[1]);
	printf("학생 수학 : %lf\n", person.grade[2]);
}