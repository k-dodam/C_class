#include <stdio.h>
int main(void)
{
	/*
	if(조건식)
		{
		조건을 만족할 경우 실행할 코드를 작성;
		}
	if문의 소괄호(조건)에는 true, false 로 나뉘는데 true일 경우에만 {중괄호} 코드를 실행, false일 경우는 아무런 행동도 일어나지 않음
	else
		{
		조건을 만족하지 않을 경우 실행할 코드를 작성;
		}

	if(조건식)
		실행할 코드가 한 줄이라면 {중괄호} 생략 가능 (생략해도 되고 안 해도 됨)
	*/

	int if_number = 10;
	if(if_number < 500)
	{
		printf("%d < 500 ? 에 대한 물음은 참 입니다. \n", if_number);
	}

	if (if_number == 3)
	{
		printf("%d = 3", if_number);
	}

	// 사용자로부터 걸음수를 입력받아 걸음 수를 조건문으로 만들고, 10000보 이상일 때, 하루에 n보 걷다니 대단해요! 를 출력
	int input;
	printf("사용자의 걸음수를 입력해주세요 : ");
	scanf_s("%d", &input);
	if (input > 10000)
	{
		printf("하루에 %d보 걷다니 대단해요! \n", input);
	}

	char alphabet = 'A';
	if (alphabet == 'B')
	{
		printf("alphabet은 B 입니다. \n");
	}
	else
	{
		printf("alphabet은 B가 아닙니다. \n");
	}

	int like_number;
	printf("좋아하는 숫자를 입력해주세요! : ");
	scanf_s("%d", &like_number);
	if (like_number >= 10)
	{
		printf("좋아하는 숫자가 10 이상이군요!");
	}
	else
	{
		printf("좋아하는 숫자가 10 미만이군요!");
	}
	return 0;
}