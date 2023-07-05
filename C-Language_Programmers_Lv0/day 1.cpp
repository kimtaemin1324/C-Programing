//202315005 미래모빌리티공학과 김태민 DAY 1

//문자열 출력하기
/*#include <stdio.h>
#define LEN_INPUT 1000001

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", &s1);  
    printf("%s", s1);

    return 0;
}
//a와 b 출력하기
#include <stdio.h>

int main(void) {
    int a = 4;
    int b = 5;
    scanf("%d %d\n", &a, &b);
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
//문자열 반복해서 출력하기
#include <stdio.h>
#define LEN_INPUT 11

int main(void) {
    char s1[LEN_INPUT];
    int a;
    scanf("%s %d", s1, &a);
    for (int i = 0; i < a; i++) {
        printf("%s", s1);
    }
    return 0;
}
//대소문자 바꿔서 출력하기
#include <stdio.h>
#define LEN_INPUT 20

int main(void) {
    char s1[LEN_INPUT]; // 0~19 > 1~20
    scanf("%s", &s1);
    for (int i = 0; i < LEN_INPUT; i++) {
        if ((s1[i] >= 'a') && (s1[i] <= 'z')) {
            s1[i] -= 32;
        }
        else if ((s1[i] >= 'A') && (s1[i] <= 'Z')) {
            s1[i] += 32;
        }
    }
    printf("%s", s1);
    return 0;
}*/
//특수문주 출력하기
#include <stdio.h>

int main(void) {
    printf("!@#$%%^&*(\\'\"<>?:;\n");

    return 0;
}