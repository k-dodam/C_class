#include <stdio.h>
int main(void)
{
	/*
	대입연산자
	a = b
	복합대입연산자
	a += b -> a = a + b
	a -= b -> a = a - b
	a *= b -> a = a * b
	a /= b -> a = a / b
	a %= b -> a = a % b
	*/
	
	int num1 = 3, num2 = 4;
	num1 += 3; // 6
	num2 *= 4; // 16
	printf("num1 += 3 의 결과는 : %d\n", num1);
	printf("num2 *= 4 의 결과는 : %d\n", num2);

	return 0;
}