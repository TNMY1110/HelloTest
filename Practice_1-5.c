#include <stdio.h>

// 중간에 함수가 있으니 함수 선언, 값을 받는 변수 sel이 int형이니 반환값 int, 매개변수로 아무것도 없으니 void
int disp_menu(void);

int main(void)
{
    /* 다음의 main함수와 실행결과를 참고하여 함수를 추가하고 프로그램을 완성합니다. */
    /*
        #### 실행결과
        1. 볶음짬뽕
        2. 콩나물국밥
        3. 바지락칼국수
        #메뉴를 선택하세요 : 2 (Enter)
        선택된 메뉴는 2번입니다. "
    */
    int sel;

    sel = disp_menu();
    printf("선택된 메뉴는 %d번 입니다. \n", sel);

    return 0;
}

int disp_menu(void)
{
    int iSelect = 0;

    // 메뉴 출력
    do
    {
        printf("1. 볶음짬뽕\n");
        printf("2. 콩나물국밥\n");
        printf("3. 바지락칼국수\n");
        printf("메뉴를 선택하세요 : ");

        if (scanf_s("%d", &iSelect) == 1)       // 숫자를 입력 받을 경우
        {
            if (iSelect < 1 || iSelect > 3)     // 메뉴 번호가 제대로 입력되지 않은 경우
            {
                printf("잘못된 입력입니다.\n");
            }
        }
        else
        {
            printf("잘못된 입력입니다.\n");       // 문자열을 입력 받았을 때
            while (getchar() != '\n');          // 입력 버퍼 초기화
        }

    } while (iSelect < 1 || iSelect > 3);   // 메뉴 안에서 고를 때까지 반복

    return iSelect;
}

// 입력 버퍼는 키보드 입력을 임시로 저장하는 공간
// scanf_s 같은 함수는 이 버퍼에서 데이터를 꺼내와 처리
// 잘못된 입력이 들어오면 버퍼에 남아 있기 때문에, 이를 직접 비워주는 과정이 필요

