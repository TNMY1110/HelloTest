#include <stdio.h>

void main(void)
{
	// 반복적으로 양수를 입력받아 총합을 구하는 프로그램을 작성
	// 0이나 음수를 입력하면 반복을 끝내고 그 동안 누적한 합을 출력
	// 처음부터 0이나 음수가 입력되면 바로 반복을 끝내고 0을 출력
	// 실행결과
	// 양수 입력: 5(Enter)
	// 양수 입력: 10(Enter)
	// 양수 입력: -1(Enter)
	// 누적된 값: 15
	int iNum = 0;			// 입력받을 변수
	int iTotal = 0;			// 입력받은 값을 누적할 변수

	while(1)
	{
		printf("양수 입력: ");
		scanf_s("%d", &iNum);	// 양수 입력

		if (iNum <= 0)		// 0보다 작거나 같을 경우 반복 종료
			break;

		iTotal += iNum;		// 입력받은 값 누적
	}

	printf("누적된 값: %d", iTotal);		// 누적된 값 출력
}
