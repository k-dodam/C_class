#include<stdio.h>
int main(void)
{
	/*
	비트단위논리연산자(이진수 계산)
	|| (or) : 대응하는 각 비트의 값 중 1이 하나라도 있으면 1을, 아니면 0을 반환
	& (and) : 대웅하는 각 비트의 값이 모두 1이면 1을, 아니면 0을 반환
	^ (xor) : 대응하는 비트의 값이 다르면 1을 반환
	~ (not) : 비트의 값이 1이면 0으로, 0이면 1로 비트 값을 반전
	*/

	int bit_five = 5; // 5 -이진수> 00000101
	int bit_three = 3; // 3 -이진수> 00000011
	printf("bit_five | bit_three = %d \n", bit_five | bit_three); // 00000001
	printf("bit_five & bit_three = %d \n", bit_five & bit_three); // 00000111
	printf("bit_five ^ bit_three = %d \n", bit_five ^ bit_three); // 00000110
	printf("~%d = %d \n", bit_five, ~bit_five);

	return 0;
}