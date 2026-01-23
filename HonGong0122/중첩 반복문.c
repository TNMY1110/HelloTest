#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	/*for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("*");
		}
		printf("\n");	
	}*/


	/*for(int i = 2; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}
	}*/

	/*for (int iCol = 0; iCol < 5; iCol++)
	{
		for (int jRow = 0; jRow < 5; jRow++)
		{
			if (iCol + jRow == 4 || iCol == jRow)
			{
				printf("*"); // i 0 = 0, 4 // i 1 = 1, 3 // i 2 = 2 // i 3 = 1, 3 // i 4 = 0, 4
			}
			else
				printf(" ");
		}
		printf("\n");
	}*/

	// 2 이상의 정수를 입력해 2부터 입력한 수까지의 모든 소수를 출력합니다.
	// 단, 한 줄에 5개씩 5칸 간격으로 출력합니다.

	// 하나의 정수가 소수이니지 아닌지 판단하는 법
	// 1. 일단 소수라고 가정
	// 2. 2부터 그 정수보다 하나 작은 수까지 하나라도 나누어 떨어지면 가정을 취소
	// 3. 1의 가정이 2에서 바뀌지 않았으면 그 정수를 출력

	int iInput = 0;
	int i = 2;
	bool isPrime = true;
	int iCnt = 0;

	printf("2 이상의 정수를 입력하세요 : ");
	scanf_s("%d", &iInput);

	for (i = 2; i <= iInput; i++) // 2부터 인풋까지의 숫자 i
	{
		isPrime = true;

		for (int j = 2; j < i; j++)	// 2부터 i 전까지의 숫자 j
		{
			// 2부터 인풋까지의 숫자 i를 2부터 나누기 시작함
			if (i % j == 0)			// 만약 i가 j로 나뉜다면
			{
				isPrime = false;	// i는 소수가 아님
			}
		}

		if(isPrime)		// 만약 i가 모든 j로 나뉘지 않는다면 i는 소수
		{
			printf("%d\t", i);	// 출력하고 카운트
			iCnt++;
		}

		if (iCnt == 5)	// 소수가 5번 쌓이면
		{
			printf("\n");	// 줄바꾸고 0으로 초기화
			iCnt = 0;
		}
	}

	return 0;
}