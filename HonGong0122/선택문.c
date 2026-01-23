#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 옷 사이즈 출력
	/*int chest = 95;
	char size;

	if (chest <= 90)
	{
		size = 'S';
	}
	else if (90 <= chest && chest <= 100)
	{
		size = 'M';
	}

	else
		size = 'L';

	printf("size : %c", size);*/


	/* *********************************************** */

	//int a = 20, b = 10;

	//if (a > 10)		// a가 10보다 크다면 안을 실행, true이므로 실행
	//{
	//	if (b >= 10) // b가 10보다 크거나 같다면 b는 1, true이므로 실행
	//		b = 1;

	//	else		// 아니라면 b는 -1
	//		b = -1;
	//}

	//printf("a : %d, b : %d\n", a, b);

	/* *********************************************** */
	// 댕글링 else 
	//int a = 10, b = 20;

	//if (a < 0)			// a가 0보다 작지만
	//{					// 중괄호 생략하면? 작동 이상해짐
	//	if (b > 0)		// b가 0보다 크다면 ok 출력
	//		printf("ok");
	//}
	//else
	//	printf("ok");	// a가 0 이상이면 ok 출력

	/* *********************************************** */

	/*int rank = 2, m = 0;

	switch(rank)
	{
	case 1:
		m = 300;
		break;
	case 2:
		m = 200;
		break;
	case 3:
		m = 100;
		break;
	default:
		m = 10;
		break;
	}

	printf("m : %d\n", m);*/

	/* *********************************************** */

	/*int n;

	printf("정수 입력: ");
	scanf_s("%d", &n);

	switch(n % 3)
	{
	case 0:
		printf("거짓");
		break;
	case 1:
		printf("참");
		break;
	case 2:
		printf("참");
		break;
	default:
		printf("입력 오류");
		break;
	}*/

	/* *********************************************** */

	// 키보드로 수식을 입력하면 계산 결과를 출력하는 프로그램을 작성하세요. 정수 사칙연산만 입력합니다

	int iA = 0;
	int iB = 0;
	int iResult = 0;
	char chOper;


	printf("사칙연산 입력(정수): ");
	scanf_s("%d %c %d", &iA, &chOper, sizeof(chOper), &iB);		// %c는 버퍼 크기를 받아야 하기 때문에 바로 뒤에 사이즈가 들어가야함. \0이 존재해서 최소 2 이상 넣는게 좋음

	switch (chOper)
	{
	case '+':
		iResult = iA + iB;
		break;
	case '-':
		iResult = iA - iB;
		break;
	case '*':
		iResult = iA * iB;
		break;
	case '/':
		if(iB == 0)
		{
			printf("0으로 나눌 수 없습니다.\n");
		}
		else
		{
			iResult = iA / iB;
			break;
		}
	default:
		break;
	}

	printf("%d %c %d = %d", iA, chOper, iB, iResult);


	/* *********************************************** */

	return 0;
}

