#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	/*int iScores[5] = { 0 };
	int i = 0;
	int iTotal = 0;
	int iCount = 0;
	
	double dAvg = 0.0;

	iCount = sizeof(iScores) / sizeof(iScores[0]);

	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &iScores[i]);
	}

	for (i = 0; i < 5; i++)
	{
		iTotal += iScores[i];
	}

	dAvg = iTotal / (double)iCount;

	for (i = 0; i < 5; i++)
	{
		printf("%5d", iScores[i]);
	}

	printf("\n");

	printf("평균: %.1lf\n", dAvg);*/


	/*****************************************/

	/*int iArray01[5];
	float fArray[10];
	int iArray02[3];
	char chArray[5];*/

	/*****************************************/

	/*int iArray03[6] = { 1, 2, 3 };

	for(int i = 0; i < 6; i++)
	{
		printf("%d\t", iArray03[i]);
	}*/

	/*****************************************/

	/*int A[3] = { 1, 2, 3 };
	int B[10];
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		B[i] = A[i % 3];
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d\t", B[i]);
	}*/

	/*****************************************/

	// O, O, X, X
	// 4


	// char str[80] = { 'p', 'i', 'g' }; O
	// char str[] = "elephant"; O
	// char str[6] = "apple"; X
	// char str[2] = { "sun", "moon" }; X
	// printf("%s", str);

	/*char str1[80], str2[80];
	char temp[80];

	printf("두 문자열 입력 : ");
	scanf("%s %s", str1, str2);
	printf("바꾸기 전 : %s, %s\n", str1, str2);
	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);
	printf("바꾼 후 : %s, %s\n", str1, str2);*/

	/*****************************************/

	// 키보드로부터 문장을 입력 받은 후, 대문자를  찾아 소문자로 바꾸는  프로그램
	// 바뀐 문장과 바뀐 문자의 수도 함께 출력합니다
	// 실행 결과
	// 문장 입력 : DON'T Worry, Be Happy~
	// 바뀐 문장 : don't worry, be happy~
	// 바뀐 문자 수 : 7

	/*char str[80];
	int i = 0;
	int iCount = 0;

	printf("문장 입력 : ");
	gets(str);

	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
			iCount++;
		}
		i++;
	}

	printf("바뀐 문장 : %s\n", str);
	printf("바뀐 문자 수 : %d\n", iCount);*/

	/*****************************************/



}