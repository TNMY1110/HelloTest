#include <stdio.h>

int Sum(int iA, int iB);
int Get_Num(void);
void Print_Char(char ch, int count);
void Print_Line(void);
void Fruit(int count);


void main(void)
{
	/*int a = 0;
	a = Sum(1, 2);

	printf("%d\n", a);*/

	/*int iResult = 0;

	iResult = Get_Num();

	printf("반환값: %d", iResult);*/

	Print_Char('!', 5);

	Print_Line();
	printf("학번\t 이름\t 전공\t 학점\n");
	Print_Line();

	Fruit(1);
}

int Sum(int iA, int iB)
{
	return iA + iB;
}

int Get_Num(void)
{
	int iNum = 0;

	printf("양수 입력: ");
	scanf_s("%d", &iNum);

	return iNum;
}

void Print_Char(char ch, int count)
{
	for (int i = 0; i < count; i++)
	{
		printf("%c", ch);
	}
	printf("\n");
}

void Print_Line(void)
{
	for (int i = 0; i < 50; i++)
	{
		printf("-");
	}
	printf("\n");
}

void Fruit(int count)
{
	printf("apple\n");

	if (count == 3)
		return;

	Fruit(count + 1);
	printf("jam\n");
}
