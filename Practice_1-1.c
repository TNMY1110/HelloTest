#include <stdio.h>
void Ten_Years_Later(char* chName, int iAge, double dHeight, char* chBlood);

void main(void)
{
	// 이름 나이 키 혈액형을 저장할 변수나 배열 선언
	// 자신의 프로필 초기화
	// 10년 후의 프로필을 출력
	// 이름과 혈액형은 변함이 없고 키는 0.5cm 줄어든다고 가정
	// 실행 결과 이름은 홍길동, 나이는 17, 키는 190.0 혈액형은 AB로 초기화한 경우
	// 실행 결과
	// 10년 후의 프로필...
	// 이름: 홍길동
	// 나이: 27살
	// 키: 189.5cm
	// 혈액형: AB형

	char chName[80] = "홍길동";
	char chBlood[3] = "AB";
	int iAge = 17;
	double dHeight = 190.0;

	Ten_Years_Later(chName, iAge, dHeight, chBlood);
}

void Ten_Years_Later(char* chName, int iAge, double dHeight, char* chBlood)
{
	printf("10년 후의 프로필...\n");
	printf("이름: %s\n", chName);
	printf("나이: %d\n", iAge + 10);
	printf("키: %.1lfcm\n", dHeight - 0.5);
	printf("혈액형: %s\n", chBlood);
}
