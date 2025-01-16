#include <stdio.h>
int main(void)
{
	/*
	시프트 연산자(비트 단위 연산자=이진수 계산)
	<< : 왼쪽 시프트 연산자 (빠져나간 비트는 버려지고 남는 비트는 0으로 채워짐)
	>> : 오른쪽 시프트 연산자 (빠져나간 비트는 버려지고 남는 비트는 첫 비트는 그대로되 나머지는 0으로 채워짐)
	*/
	// 10 << 1 -> 00001010(10)이 전제 앞으로 1비트씩 이동 후 빠져나간 비트는 버리고 남는 비트 0으로 채우기 > 00010100(20 = 10*2^1)
	// 10 << 2 -> 00101000(40 = 10*2^2)
	// 10 << 3 -> 01010000(80 = 10*2^3)
	// a << n -> a*2^n

	// 10 >> 1 -> 00000101(10)이 전체 뒤로 1비트씩 이동 후 빠져나간 비트는 버리고 남는 비트 첫 비트는 그대로되 남는 비트는 0으로 채우기 > 00000101(5)
	// 10 >> 2 -> 00000010(2)
	// 10 >> 3 -> 00000001(1)
	// a << n -> a / 2^n

	int num1 = 10, num2 = 20;
	int shift_left = num1 << 1;
	int shift_right = num2 >> 2;
	printf("%d << 1 %d \n", num1, shift_left);
	printf("%d >> 2 %d \n", num2, shift_right);
	
	return 0;
}