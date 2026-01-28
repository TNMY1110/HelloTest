#include <stdio.h>
#include <stdbool.h>

void main(void)
{
	/*
	로또 프로그램
	1부터 45까지 수중에 6개의 숫자를 입력하여 출력하는 프로그램을 작성합니다.
	단, 입력하는 중에 이미 입력한 번호와 같은 번호를 입력하면 중복 오류 메시지를 출력하고 새로 입력합니다.

	#### 실행결과
	로또번호 입력 : 7 (Enter)
	로또번호 입력 : 7 (Enter)
	같은 번호가 있습니다.!
	로또번호 입력 : 9 (Enter)
	로또번호 입력 : 15 (Enter)
	로또번호 입력 : 20 (Enter)
	로또번호 입력 : 33 (Enter)
	로또번호 입력 : 20 (Enter)
	같은 번호가 있습니다.!
	로또번호 입력 : 44 (Enter)
	입력된 로또번호 : 7 9 15 20 33 44
	*/

	int iNum[6] = { 0 };			// 6개의 번호를 저장할 배열
	int iInput = 0;					// 입력받을 번호
	int iCount = 0;					// 카운트
	bool isDupl = false;			// 중복 확인

	while (iCount < 6)
	{
		printf("로또번호 입력 : ");
		if (scanf_s("%d", &iInput) == 1)	// 숫자를 입력 받았다면
		{
			if (iInput > 45 || iInput < 1)
			{
				printf("잘못된 입력입니다!\n");
				continue;
			}

			for (int i = 0; i < 6; i++)		// 중복 번호 확인을 위한 반복문
			{
				if (iInput == iNum[i])		// 중복되는 번호가 있다면
				{
					printf("같은 번호가 있습니다!\n");		// 중복 오류 메시지 출력
					isDupl = true;
				}
			}

			if (isDupl)			// 중복이 있다면 반복
			{
				isDupl = false;
				continue;
			}
			else				// 없다면 카운트 증가
			{
				iNum[iCount] = iInput;
				iCount++;
			}
		}
		else
		{
			printf("잘못된 입력입니다!\n");       // 문자열을 입력 받았을 때
			while (getchar() != '\n');			// 입력 버퍼 초기화
		}
	}
	// 카운트가 6까지 다 찼다면
	printf("입력된 로또번호 : ");			// 번호 출력
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", iNum[i]);
	}
}