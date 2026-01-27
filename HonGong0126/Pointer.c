#include <stdio.h>

void change(int* a, int b);

void main(void)
{
	//int a;
	////int* pa;

	//change(&a, 10);

	///*printf("포인터로 a 값 출력 : %d\n", *pa);*/
	//printf("변수명으로 a 값 출력 : %d\n", a);

	/*printf("int형 변수의 주소 : %u\n", &a);
	printf("double형 변수의 주소 : %u\n", &b);
	printf("char형 변수의 주소 : %u\n", &c);*/

	/****************************************************/

	/*int iA = 10, iB = 20;
	const int* pa = &iA;

	printf("변수 a의 값 : %d\n", *pa);
	pa = &iB;
	printf("변수 b의 값 : %d\n", *pa);
	pa = &iA;
	iA = 20;
	printf("변수 a의 값 : %d\n", *pa);*/
	
	/****************************************************/

	// 다음 각 변수의 주소를 저장할 포인터를 선언하세요. 변수명은 p로 합니다
	// char ch;			char* pch;
	// int in;			int* pin;
	// double db;		double* pdb;

	// &ch = 주소 100
	// &in = 주소 101
	// &db = 주소 105
	// *&ch = 'A'
	// *&in = 10
	// *&db = 3.4

	// 다음 코드의 실행 결과를 적으세요
	/*int a = 10;
	int* p = &a;
	*p = 20;
	printf("%d", a);*/

	// 결과 : 20

	/****************************************************/

	/*int a = 10;
	int* p = &a;
	double* pd;

	pd = p;
	printf("%lf\n", *pd);*/

	// 포인터 자체끼리는 크기가 같지만 포인터가 가리키는 주소의 크기가 다름(int는 4바이트 double은 8바이트)
	// 이 경우 실제 주소를 넘어서 상관 없는 부분의 주소까지 읽기 때문에 문제가 생김

	/****************************************************/
}

void change(int* a, int b)
{
	*a = b;
}
