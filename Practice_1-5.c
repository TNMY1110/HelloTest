#include <stdio.h>

// 중간에 함수가 있으니 함수 선언, 값을 받는 변수 sel이 int형이니 반환값 int, 매개변수로 아무것도 없으니 void
int disp_menu(void);

int main(void)
{
    /* 다음의 main함수와 실행결과를 참고하여 함수를 추가하고 프로그램을 완성합니다. */
    int sel;

    sel = disp_menu();
    printf("선택된 메뉴는 %d번 입니다. \n", sel);

    return 0;
}

int disp_menu(void)
{
    return 0;
}
