#include <stdio.h>
int main(void)
{
	/*
	산술연산자(이항연산자, 단항(부호)연산자 ex. -3)
	1. + (더하기)
	2. - (빼기)
	3. * (곱하기)
	4. / (나누기)
	5. % (나머지)
	*/

	int number1 = 7, number2 = 3;
	printf("%d + %d = %d \n", number1, number2, number1 + number2);
	printf("%d - %d = %d \n", number1, number2, number1 - number2);
	printf("%d * %d = %d \n", number1, number2, number1 * number2);
	printf("%d / %d = %d \n", number1, number2, number1 / number2);
	printf("%d %% %d = %d \n", number1, number2, number1 % number2);

	int num1 = 1;
	float num2 = 1.2;
	printf("%d + %f = %f", num1, num2, num1 + num2);


	return 0;
}