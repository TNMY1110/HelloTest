#include <stdio.h>
// p234 도전실전예제 

// 1부터 10까지의 합을 재귀호출을 사용합니다. 1부터 일정 수(n)까지의 합을 구하는 재귀호출함수를 만들고 호출해서 구현합니다.함수명은 다음과 같이 작성합니다.
void sum(int);
int ref_func(int n);	//1부터 n까지의 합을 반환하는 함수 

int main(void)
{
	int iA = 0;
	iA = ref_func(10);

	printf("%d", iA);

	return 0;
}

void sum(int iA)
{
	int iResult = 0;

	for (int i = 1; i <= iA; i++)
	{
		iResult += i;
	}

	printf("1부터 %d까지의 합은 %d입니다.\n", iA, iResult);
}

int ref_func(int n)
{
	int iResult = 0;

	if (n == 0)
		return 0;

	iResult += n + ref_func(n - 1);
	
	return iResult;
}

