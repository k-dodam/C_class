#include <stdio.h>
int main(void)
{
	/*
	���������(���׿�����, ����(��ȣ)������ ex. -3)
	1. + (���ϱ�)
	2. - (����)
	3. * (���ϱ�)
	4. / (������)
	5. % (������)
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