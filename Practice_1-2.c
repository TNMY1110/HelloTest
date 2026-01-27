#include <stdio.h>

int prime_check(int iNumber);

void main(void)
{
	// 32767이 소수(Prime Number)인지 아닌지를 판단하여 출력하는 프로그램을 작성
	// 단 정수를 변수로 받아 소수면 1을 반환하고 소수가 아니면 0을 반환하는 함수를 만들고 main 함수에서 호출하여 작성
	// 함수 명은 prime_check
	int iNumber = 32767;	// 소수인지 확인할 변수

	if (prime_check(iNumber) == 1)	// 소수면 "소수 맞음" 출력
		printf("소수 맞음");
	else							// 소수가 아니면 "소수 아님" 출력
		printf("소수 아님");			
}

int prime_check(int iNumber)
{
	for(int i = 2; i < iNumber; i++)	// 2부터 inumber 이전까지 나눴을 때(iNumber가 2라면 그냥 통과하므로 상관 없음)
	{
		if (iNumber % i == 0)			// 나머지가 0이 나온다면 소수가 아니므로 0 반환
		{
			return 0;
		}
	}

	return 1;							// 전부 돌리고 나서 나머지가 0이 안나온다면 소수이므로 1 반환
}
