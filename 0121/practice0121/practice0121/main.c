#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	 /*printf("학번: %d\n", 13305);
	 printf("이름: %s\n", "둘리");
	 printf("학점: %c\n", 65);*/

	//unsigned int uiA = 4294967295;

	//printf("%d\n", uiA); // -1
	//uiA = -1;
	//printf("%u\n", uiA); // 4294967295

	/* **************************************************** */

	//char chFruit[8] = "apple";	// \0을 자동으로 넣기 때문에 1 이상 더 커야함
	//printf("%s\n", chFruit);
	//printf("%c\n", chFruit[0]);
	//printf("%c\n", chFruit[1]);
	//printf("%c\n", chFruit[2]);
	//printf("%c\n", chFruit[3]);
	//printf("%c\n", chFruit[4]);

	//// 문자열 저장 strcpy
	//strcpy(chFruit, "banana");	// 문자열의 크기 중요, banana는 7보다 커야함

	// 예약어는 컴파일러와 약속된 단어, 식별자는 사용자가 만든 단어
	// 식별자를 만드는 규칙
	// 알파벳 A~Z, a~z, 숫자 0~9, _언더바
	// 숫자로 시작 X
	// 대문자와 소문자는 서로 다른 식별자
	// 예약어는 식별자로 사용 불가

	/* **************************************************** */

	// 국어, 영어, 수학 점수를 저장할 변수(kor, eng, mat)를 선언하고 
	// 각각 70, 80, 90점으로 초기화합니다.
	// 총점을 저장할 변수(tot)를 선언해 세 과목의 합을 구하고 
	// 세 과목의 점수와 총점을 출력하는 프로그램을 작성하세요.

	/*int iKor = 70, iEng = 80, iMat = 90;
	int iTot = 0;

	iTot = iKor + iEng + iMat;

	printf("국어: %d\t영어: %d\t수학: %d\n", iKor, iEng, iMat);
	printf("총점: %d\n", iTot);*/

	/* **************************************************** */

	/*int iInput = 0;

	scanf_s("%d", &iInput);
	printf("입력된 값: %d\n", iInput);*/

	/* **************************************************** */

	// 키보드로 문자를 입력해 아스키 코드 값을 출력하는 프로그램이 완성되도록 빈칸에 알맞은 코드를 적으세요

	/*char ch;
	int iA = 0;

	printf("문자 입력: ");
	scanf_s("%c", &ch);
	printf("%c문자의 아스키 코드 값: %d\n", ch, ch);*/

	//복합 대입 연산자
	// i += 1; i-= 1; i *= 1;


	// 콤마 연산자
	int iA = 10, iB = 20;
	int iRes = 0;

	iRes = (++iA, ++iB);

	printf("a:%d, b:%d\n", iA, iB);
	printf("res: %d", iRes);



	return 0;
}