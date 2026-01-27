#include <stdio.h>

void main(void)
{
    //빈 칸이 포함된 문자열 "Be happy!"를 저장할 가장 작은 char형 배열을 선언하고 키보드로부터 입력하는 코드를 작성합니다. "
    char chArray[10];   // "Be happy!"를 저장할 가장 작은 char형 배열 -> Be happy!는 총 9글자이므로 마지막 \0까지 10의 크기를 가진 배열 선언
    gets(chArray);      // 입력

    printf("%s", chArray);  // 출력
}