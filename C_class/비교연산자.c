#include <stdio.h>
int main(void)
{
	/*
	a > b (a가 b보다 크다)
	a < b (a가 b보다 작다)
	a >= b (a가 b보다 크거나 같다)
	a <= b (a가 b보다 작거나 같다)
	a == b (a와 b가 같다)
	a != b (a와 b는 다르다)
	*/

	int a = 1, b = 10;
	printf("a > b : %d \n", a > b); // false = 0
	printf("a < b : %d \n", a < b); // true = 1
	printf("a >= b : %d \n", a >= b);
	printf("a <= b : %d \n", a <= b);
	printf("a == b : %d \n", a == b);
	printf("a != b : %d \n", a != b);

	return 0;
}