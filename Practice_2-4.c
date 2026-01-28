#include <stdio.h>

void rotate(int* pa, int* pb, int* pc);

void main(void)
{
    /*
    #### 문제
    숫자 이동프로그램
    1, 2, 3으로 초기화된 세 변수의 값을 하나씩 왼쪽으로 이동하여 출력합니다.
    가장 왼쪽의 값은 가장 오른쪽으로 이동합니다.
    키보드로 엔터를 입력할 때 마다 값을 이동하며,
    엔터 이외의 키를 입력하면 종료합니다.

    세변수의 값을 동시에 바꾸는 함수를 만들어 사용하여, 함수 원형은 다음과 같이 작성합니다.

    void rotate(int* pa, int* pb, int* pc);
    */

    char chInput;       // 입력용 변수

    int iNum1 = 1;      // 1 2 3으로 초기화된 세 변수
    int iNum2 = 2;
    int iNum3 = 3;

    do
    {
        printf("%d : %d : %d", iNum1, iNum2, iNum3);    // 숫자 출력
        scanf_s("%c", &chInput);                        // 입력

        rotate(&iNum1, &iNum2, &iNum3);     // 세변수의 값을 동시에 바꾸는 함수
    } while (chInput == '\n');              // 엔터 이외의 키를 입력하면 종료

    /*
    실행결과
    1 : 2 : 3 (Enter) // 최초 세 변수의 값 1, 2, 3 출력
    2 : 3 : 1 (Enter) // 각 값을 왼쪽으로 이동, 가장 왼쪽의 값은 가장 오른쪽으로 이동
    3 : 1 : 2 (Enter)
    1 : 2 : 3 (Enter)
    2 : 3 : 1x(Enter) // 다른 문자와 함께 엔터 입력하면 반복 종료
    */
}

void rotate(int* pa, int* pb, int* pc)
{
    int temp = *pa;

    *pa = *pb;
    *pb = *pc;
    *pc = temp;
}
