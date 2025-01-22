#include <stdio.h>
int main(void)
{
	int x = 10, y = 20;

	int* const PTR = &x;
	printf("%d\n", *PTR);

	*PTR = 30; // => x = 30;
	printf("%d\n", x);

	// PTR = &y => int* const PTR = &y; => 안 됨! PTR이 상수여서 여러 번 초기화 X


	return 0;
}