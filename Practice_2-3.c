#include <stdio.h>
#include <stdbool.h>

void func(int* mod, int* rem);      // int형 변수의 주소를 받으므로 포인터를 매개변수로 설정

void main(void)
{
    /*
    #### 문제
    몫과 나머지 입력 프로그램
    키보드로 입력한 양수를 4로 나누어 몫과 나머지를 변수에 저장하는 함수를 만듭니다.
    다음 main 함수와 실행결과를 참고하여 작성합니다.
    */
    
    int mod = 0;    // 몫
    int rem = 0;    // 나머지

    func(&mod, &rem);
    printf("몫 : %d, 나머지 : %d", mod, rem);

    /*
    #### 실행결과
    양수 입력 : 9
    몫 : 2, 나머지 : 1
    */
}

void func(int* mod, int* rem)
{
}
