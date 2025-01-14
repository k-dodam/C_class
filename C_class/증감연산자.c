#include <stdio.h>
int main(void)
{
	/*
	증감연산자
	변수 ++ or ++ 변수 (증가)
	변수 -- or -- 변수 (감소)
	*/

	// 변수 ++ 과 ++ 변수의 차이
	int put_a = 10, put_b = 20;
	printf("A : %d \n", put_a); // 10
	printf("A : %d \n", ++ put_a); // 11
	printf("A : %d \n", put_a); // 11
	printf("\n");
	printf("A : %d \n", put_b); // 20
	printf("A : %d \n", put_b ++); // 20
	printf("A : %d \n", put_b); // 21

	return 0;
}