#include <stdio.h>
int main(void)
{
	// 변수와 포인터 변수 생성
	// 변수에 들어있는 값 : 변수의 주소값 

	int a = 10;
	int* p = &a;
	printf("%p : %d", p, *p);

	return 0;
}