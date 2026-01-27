#include <stdio.h>

void swap_int(int* pA, int* pB);
void swap(double* pA, double* pB);
void line_up(double* maxp, double* midp, double* minp);

void main(void)
{
	/*int a = 10, b = 20;

	swap_int(&a, &b);
	printf("a: %d, b: %d\n", a, b);*/

	/******************************************/
	// 다음 코드를 참고해 보기에서 상수와 변수를 구분하세요
	/*int a = 10;
	int* p = &a;
	*p = 20;*/

	// a: 변수 10: 상수 p: 변수 *p: 변수 &a: 상수
	
	/******************************************/
	// 주소 값의 크기가 4바이트일 때, sizeof 연산의 결괏값이 가장 큰 것을 고르세요.
	/*char* pc;
	double* pd;*/
	// sizeof(pc) = 8, sizeof(pd) = 8, sizeof(*pc) = 1, sizeof(*pd) = 8
	
	/*printf("%d\n", sizeof(pc));
	printf("%d\n", sizeof(pd));
	printf("%d\n", sizeof(*pc));
	printf("%d\n", sizeof(*pd));*/

	/******************************************/
	// 다음 코드의 실행 결과를 적으세요
	/*int a = 10, b = 20;
	int* pa = &a, *pb = &b, *pt;
	pt = pa;
	pa = pb;
	pb = pt;
	printf("%d, %d", *pa, *pb);*/
	// 예상 결과: 20, 10

	/******************************************/
	// 미니 정렬 프로그램
	// 키보드로 실수 3개를 입력, 큰 숫자부터 작은 숫자로 정렬한 뒤 출력하는 프로그램
	// 다음 코드와 출력 결과를 참고해 line_up 함수를 작성
	// line_up 함수는 이미 정의된 swap 함수를 호출해 구현

	double max = 0.0, mid = 0.0, min = 0.0;

	printf("실수값 3개 입력 : ");
	scanf_s("%lf %lf %lf", &max, &mid, &min);
	line_up(&max, &mid, &min);
	printf("정렬된 값 출력 : %.1lf, %.1lf, %.1lf\n", max, mid, min);
}

void swap_int(int* pA, int* pB)
{
	int temp;

	temp = *pA;		// temp = 10
	*pA = *pB;		// a = 20
	*pB = temp;		// b = temp(10)
}

void swap(double* pA, double* pB)
{
	double temp;

	temp = *pA;
	*pA = *pB;
	*pB = temp;
}

void line_up(double* maxp, double* midp, double* minp)
{
	if (*maxp < *minp)
	{
		swap(maxp, minp);
	}

	if (*maxp < *midp)
	{
		swap(maxp, midp);
	}

	if (*midp < *minp)
	{
		swap(midp, minp);
	}
}
