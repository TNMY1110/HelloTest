#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

#define MENU 4		// 메뉴 가짓수

void Print_Goods(char** chProducts, int* iPrices);		// 상품 출력
int Select_Goods(char** chProducts, int* iPrices);		// 상품 선택, 고른 상품 가격 출력
void Insert_Money();		// 금액 투입

int main(void)
{
	char* chProducts[MENU] = { "콜라", "사이다", "초콜릿", "새콤달콤" };
	int iPrices[MENU] = { 1400, 1400, 1200, 1000 };
	int iSelect = 0;

	Print_Goods(&chProducts, &iPrices);
	iSelect = Select_Goods(&chProducts, &iPrices);

	return 0;
}

void Print_Goods(char** chProducts, int* iPrices)	// 이미 "콜라"같은게 char의 배열이라 chProducts는 배열의 배열이므로 이중 포인터로 매개변수 받기
{
	printf("=========메뉴=========\n");
	printf("1.%s - %d원\n", chProducts[0], iPrices[0]);
	printf("2.%s - %d원\n", chProducts[1], iPrices[1]);
	printf("3.%s - %d원\n", chProducts[2], iPrices[2]);
	printf("4.%s - %d원\n", chProducts[3], iPrices[3]);
	printf("======================\n");

	return 0;
}

int Select_Goods(char** chProducts, int* iPrices)		// 상품 선택
{
	int iSelect = 0;

	while (true)
	{
		printf("상품을 선택해주세요: ");

		if (scanf_s("%d", &iSelect) == 1)			// 입력값이 정수라면
		{
			if (iSelect > MENU || iSelect < 1)		// 만약 선택이 범위에서 벗어난다면
			{
				printf("\n잘못된 입력입니다.\n");
			}

			else			// 선택 완료시
			{
				printf("\n[%s]울/를 선택하셨습니다. %d원입니다.\n", chProducts[iSelect - 1], iPrices[iSelect - 1]);
				break;
			}
		}
		else				// 입력값이 정수가 아닐 경우
			while (getchar() != '\n');		// 버퍼 비우기
	}

	return iSelect;
}

void Insert_Money()
{
}
