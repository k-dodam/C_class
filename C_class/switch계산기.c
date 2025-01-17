#include <stdio.h>
int main(void)
{
	// +, -, *, / 만 가능
	// 변수 : 문자형 1개, 정수형 2개
	// 나눗셈 -> 특수처리

	char character;
	int num1, num2;
	printf("연산자를 입력하세요. (+, -, *, /) : ");
	scanf_s("%c", &character, 1); // character형변수, n = 문자를 n자리 받겠다.
	printf("좌항을 입력하세요. : ");
	scanf_s("%d", &num1);
	printf("우항을 입력하세요. : ");
	scanf_s("%d", &num2);

	switch (character) {
	case '+': printf("%d + %d = %d", num1, num2, num1 + num2);
		break;
	case '-': printf("%d - %d = %d", num1, num2, num1 - num2);
		break;
	case '*' : printf("%d * %d = %d", num1, num2, num1 * num2);
		break;
	case '/': 
		if (num2 != 0) {
			printf("%d / %d = %d", num1, num2, num1 / num2);
		}
		else {
			printf("나눗셈 계산에서 우항은 0일 수 없습니다.");
		}
		break;
	default : printf("유효하지 않은 연산입니다.");
	}

	return 0;
}