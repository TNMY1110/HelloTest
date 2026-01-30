#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

#define MENU 4		// 메뉴 가짓수

void Print_Goods(char** chProducts, int* iPrices, int* iStock);		// 상품 출력
void Check_Stock(char** chProducts, int* iPrices, int* iStock, int iMenu);	// 재고 여부에 따라 출력
int Select_Goods(char** chProducts, int* iPrices, int* iStock);		// 상품 선택, 고른 상품 가격 출력
bool Select_Purchase(bool isRestart);			// 구입 혹은 취소 선택
int Insert_Money(int iPrice);				// 금액 투입
void Purchase_Completed(char* chProducts, int* iStock);	// 구매 완료
void Get_Back_Change(int iChange);			// 잔돈 반환

int main(void)
{
	bool isRestart = true;		// 상품 구매 반복할건지
	bool isPurchase = false;	// 상품 구매 선택

	char* chGoods[MENU] = { "콜라", "사이다", "초콜릿", "새콤달콤" };	// 상품 이름
	int iPrices[MENU] = { 1400, 1400, 1200, 1000 };						// 상품 가격
	int iStock[MENU] = { 5, 4, 3, 2 };		// 상품 재고

	int iSelect = 0;		// 선택한 상품 번호
	int iChange = 0;		// 거스름돈

	while (isRestart)
	{
		while (!isPurchase)		// 구매 선택
		{
			Print_Goods(&chGoods, &iPrices, &iStock);
			iSelect = Select_Goods(&chGoods, &iPrices, &iStock);
			isPurchase = Select_Purchase(false);
		}

		iChange = Insert_Money(iPrices[iSelect]);
		Purchase_Completed(chGoods[iSelect], &iStock[iSelect]);
		Get_Back_Change(iChange);

		isPurchase = false;		// 구매 선택 초기화
		isRestart = Select_Purchase(isRestart);	// 재구매
	}

	return 0;
}

void Print_Goods(char** chProducts, int* iPrices, int* iStock)	// 이미 "콜라"같은게 문자열이라 chProducts는 문자열의 배열이므로 이중 포인터로 매개변수 받기
{
	printf("=========메뉴=========\n");
	for (int i = 0; i < MENU; i++)
	{
		Check_Stock(chProducts, iPrices, iStock, i);
	}
	printf("======================\n");
}

void Check_Stock(char** chProducts, int* iPrices, int* iStock, int iMenu)
{
	if (iStock[iMenu] > 0)
		printf("%d.%s - %d원 - %d개 남음\n", (iMenu + 1), chProducts[iMenu], iPrices[iMenu], iStock[iMenu]);
	else
		printf("%d.%s - 품절\n", (iMenu + 1), chProducts[iMenu]);
}

int Select_Goods(char** chProducts, int* iPrices, int* iStock)		// 상품 선택
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
				if (iStock[iSelect - 1] <= 0)		// 재고가 0보다 작거나 같을 시
				{
					printf("\n[%s]의 재고가 부족합니다.\n", chProducts[iSelect - 1]);
				}
				else
				{
					printf("\n[%s]을/를 선택하셨습니다. %d원입니다.\n", chProducts[iSelect - 1], iPrices[iSelect - 1]);
					break;
				}
			}
		}
		else				// 입력값이 정수가 아닐 경우
		{
			printf("\n잘못된 입력입니다.\n");
			while (getchar() != '\n');		// 버퍼 비우기
		}
	}

	return iSelect - 1;		// 선택이 1~4이므로 1 빼주기
}

bool Select_Purchase(bool isRestart)
{
	char chSelect;

	while (getchar() != '\n');	// 버퍼 초기화

	while (true)
	{
		if (isRestart)
			printf("\n다시 ");

		printf("구매하시겠습니까?(y/n): ");

		if (scanf_s("%c", &chSelect) == 1)		// 입력 검사
		{
			if (chSelect == 'Y' || chSelect == 'y')
			{
				return true;
			}
			else if (chSelect == 'N' || chSelect == 'n')
			{
				return false;
			}
			else		// 오입력 방지
			{
				printf("\n잘못된 입력입니다.\n");
				while (getchar() != '\n');		// 입력 버퍼 초기화
				continue;
			}
		}
		else		// 입력 검사 통과 못했을 시
		{
			printf("\n잘못된 입력입니다.\n");
			while (getchar() != '\n');		// 입력 버퍼 초기화
			continue;
		}
	}

	return false;
}

int Insert_Money(int iPrice)		// 금액 투입
{
	int iMoney = 0;
	int iInput = 0;

	printf("\n돈을 넣어주세요.\n");

	while (iMoney < iPrice)
	{
		while (getchar() != '\n');	// 입력 버퍼 초기화
		printf("가격: %d원\n", iPrice);
		printf("현재 금액: %d원\n", iMoney);
		printf("투입: ");

		if (scanf_s("%d", &iInput) == 1)		// 입력 검사
		{
			if (iInput > 0)		// 입력값이 0 초과일 경우
			{
				iMoney += iInput;

				if (iMoney < iPrice)
				{
					printf("\n%d원 부족합니다.\n", iPrice - iMoney);
				}
			}
			else		// 입력값이 0 이하일 경우
			{
				printf("\n잘못된 입력입니다.\n");
				continue;
			}
		}
		else		// 오입력시
		{
			printf("\n잘못된 입력입니다.\n");
			continue;
		}
	}
	printf("\n금액이 충분합니다!\n");

	return iMoney - iPrice;		// 넣은 돈에서 가격만큼 빼고 반환
}

void Purchase_Completed(char* chProducts, int* iStock)
{
	printf("\n=== 구매 완료 ===\n");
	printf("[%s]이/가 나옵니다.\n", chProducts);
	*iStock -= 1;		// 재고 감소
}

void Get_Back_Change(int iChange)
{
	if (iChange > 0)		// 거스름돈이 0원 초과라면
	{
		printf("거스름돈: %d원\n", iChange);		// 거스름돈 출력
	}
}
