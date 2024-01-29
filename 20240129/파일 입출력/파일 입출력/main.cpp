#pragma warning(disable :4996)//  4996이라는 경고를 무시하도록 지시
#define MAX_LEN 100//최대 문자열 길이를 나타내며, 100으로 설정
#include <stdio.h>

int main()
{   
    FILE* fs;// 파일 포인터 변수 선언
    fs = fopen("test.txt", "r");// "test.txt" 파일을 읽기 모드로 열기

    while (feof(fs) == 0)// 파일의 끝에 도달할 때까지 반복
    {
        char str[MAX_LEN];// 문자열을 저장할 배열을 선언
        fgets(str, MAX_LEN, fs);// 파일에서 한 줄을 읽어서 str에 저장한다
        printf("%s", str);// 문자열 출력
    }
}
