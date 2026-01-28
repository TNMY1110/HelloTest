#include <stdio.h>

void main(void)
{
	/*
	#### 문제
	다섯 명의 심사위원 점수를 입력하여 유효점수와 평균을 출력하는 프로그램을 작성합니다.유효점수는 최고점과 최저점을 제외한 점수 이며 평균은 유효점수로 계산합니다.

	#### 실행결과
	5명 심사위원의 점수 입력 : 7 9 4 8 5
	유효점수 : 7 8 5
	평균 : 6.7
	*/

	// 5명의 심사위원 점수를 저장할 배열
	// 유효 점수를 위해 최고점과 최저점을 제외
	// 평균을 유효 점수로 계산

	int iScore[5] = { 0 };		// 심사위원의 점수를 저장할 배열
	int iValScore[3] = { 0 };	// 유효 점수를 저장할 배열
	int iCount = 0;				// 유효 점수 3개를 셀 카운트
	int iMax = -1;				// 최고점
	int iMin = _CRT_INT_MAX;	// 최저점
	float fAver = 0.f;			// 평균을 저장할 변수

	printf("5명 심사위원의 점수 입력 : ");

	for (int i = 0; i < 5; i++)	// 입력
	{
		scanf_s("%d", &iScore[i]);

		if (iMax < iScore[i])	// 최고점 갱신
		{
			iMax = iScore[i];
		}

		if (iMin > iScore[i])	// 최저점 갱신
		{
			iMin = iScore[i];
		}
	}

	// 최고점과 최저점을 제외하기
	for (int i = 0; i < 5; i++)	// 배열을 돌면서 최고점과 최저점 제외하기
	{
		if (iScore[i] == iMax)	// 만약 최고점일 경우 초기화, 같은 점수가 추가 안되는 것 방지하기
		{
			iMax = -1;
			continue;
		}
		if (iScore[i] == iMin)	// 만약 최저점일 경우 초기화, 같은 점수가 추가 안되는 것 방지하기
		{
			iMin = _CRT_INT_MAX;
			continue;
		}

		iValScore[iCount] = iScore[i];	// 최고점과 최저점이 아닐 경우 유효 점수 변경
		iCount++;						// 카운트 증가

		if (iCount == 3)				// 만일을 대비해 카운트가 다 찼을 경우 반복문 종료
			break;
	}

	// 유효점수와 평균 계산 후 출력
	printf("\n");
	printf("유효점수 : ");	// 유효점수 출력
	printf("평균 : ");		// 평균 출력
}