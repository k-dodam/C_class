#include <stdio.h>

int main(void)
{
	int number1 = 1; // number1 이라는 것을 통해 1에 접근이 가능하다;
	printf("%d \n",number1); // %d = printf 의 f(포멧), 10진수 정수를 받는 서식 지정자;

	int number2 = 2;
	printf("숫자 : %d \n번호 : %d \n",number2, number2);

	// 2 * 3 = 6
	// 조건 : 변수 3개 선언
	// 곱하기는 *를 사용한다.
	int num1 = 2;
	int num2 = 3;
	int num3 = num1 * num2;
	printf("%d * %d = %d",num1, num2,num3);

	return 0;
}