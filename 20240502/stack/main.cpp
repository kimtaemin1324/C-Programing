#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char arr[5][20];  // 스택을 나타내는 2차원 배열
    int command = 0;  // 사용자 입력을 저장할 변수
    int i = 0;        // 스택의 현재 상단 인덱스를 나타내는 변수

    while (1)  // 무한 루프
    {
        printf("명령어를 입력하시오(push: 0, pop: 1): ");  // 사용자에게 명령어 입력을 요구
        scanf("%d", &command);                             // 사용자 입력을 받음

        switch (command)
        {
        case 0:  // push 명령어 처리
            if (i < 5)  // 스택이 가득 차지 않은 경우
            {
                printf("arr[%d] = ", i);  // 현재 스택 상단 인덱스 출력
                scanf(" %s", arr[i]);     // 사용자로부터 문자열 입력을 받아 스택에 저장
                printf("TOP: %d\n", i);   // 현재 배열의 인덱스 출력
                i++;                      // 인덱스 증가
                break;
            }
            else  // 스택이 가득 찬 경우
            {
                printf("ERROR. FULL STACK\n");  // 오류 메시지 출력
                break;
            }

        case 1:  // pop 명령어 처리
            if (i > 0)  // 스택이 비어있지 않은 경우
            {
                i--;                    // 인덱스 감소
                arr[i][0] = '\0';       // 스택 상단 값을 비움
                printf("pop 실행\n");   // pop 실행 메시지 출력
                printf("TOP: %d\n", i); // 현재 배열의 인덱스 출력
                break;
            }
            else  // 스택이 비어있는 경우
            {
                printf("ERROR. EMPTY STACK\n");  // 오류 메시지 출력
                break;
            }

        default:  // 잘못된 명령어 입력인 경우
            printf("NOT COMMAND\n");  // 오류 메시지 출력
            break;
        }
    }

    return 0;
}