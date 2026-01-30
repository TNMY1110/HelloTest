#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

#define MENU 4		// 메뉴 가짓수

void Print_Goods(char** chProducts, int* iPrices);		// 상품 출력
int Select_Goods(char** chProducts, int* iPrices);		// 상품 선택, 고른 상품 가격 출력
bool Select_Purchase(bool isRestart);			// 구입 혹은 취소 선택
int Insert_Money(int iPrice);		// 금액 투입
void Purchase_Completed(char* chProducts);	// 구매 완료
void Get_Back_Change(int iChange);			// 잔돈 반환

int main(void)
{
	bool isRestart = true;		// 상품 구매 반복할건지
	bool isPurchase = false;	// 상품 구매 선택

	char* chProducts[MENU] = { "콜라", "사이다", "초콜릿", "새콤달콤" };	// 상품 이름
	int iPrices[MENU] = { 1400, 1400, 1200, 1000 };						// 상품 가격

	int iSelect = 0;		// 선택한 상품 번호
	int iChange = 0;		// 거스름돈

	while (isRestart)
	{
		while (!isPurchase)		// 구매 선택
		{
			Print_Goods(&chProducts, &iPrices);
			iSelect = Select_Goods(&chProducts, &iPrices);
			isPurchase = Select_Purchase(false);
		}

		iChange = Insert_Money(iPrices[iSelect]);
		Purchase_Completed(chProducts[iSelect]);
		Get_Back_Change(iChange);

		isPurchase = false;		// 구매 선택 초기화
		isRestart = Select_Purchase(isRestart);	// 재구매
	}

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
				printf("\n[%s]을/를 선택하셨습니다. %d원입니다.\n", chProducts[iSelect - 1], iPrices[iSelect - 1]);
				break;
			}
		}
		else				// 입력값이 정수가 아닐 경우
			while (getchar() != '\n');		// 버퍼 비우기
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
			printf("다시 ");

		printf("구매하시겠습니까?(y/n): ");

		if (scanf_s("%c", &chSelect) == 1)
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
				printf("잘못 입력하셨습니다.\n");
				while (getchar() != '\n');		// 입력 버퍼 초기화
				continue;
			}
		}

		else
		{
			printf("잘못 입력하셨습니다.\n");
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
	printf("가격: %d원\n", iPrice);

	while (iMoney < iPrice)
	{
		while (getchar() != '\n');	// 입력 버퍼 초기화
		printf("현재 금액: %d원\n", iMoney);
		printf("투입: ");
		scanf_s("%d", &iInput);

		iMoney += iInput;

		if (iMoney < iPrice)
		{
			printf("\n%d원 부족합니다.\n", iPrice - iMoney);
		}
	}
	printf("\n금액이 충분합니다!\n");

	return iMoney - iPrice;		// 넣은 돈에서 가격만큼 빼고 반환
}

void Purchase_Completed(char* chProducts)
{
	printf("\n=== 구매 완료 ===\n");
	printf("[%s]이/가 나옵니다.\n", chProducts);
}

void Get_Back_Change(int iChange)
{
	if (iChange > 0)		// 거스름돈이 0원 이상이라면
	{
		printf("거스름돈: %d원\n", iChange);		// 거스름돈 출력
	}
}
