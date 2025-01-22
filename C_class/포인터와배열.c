#include <stdio.h>
int main(void)
{
	int a[5] = { 1,2,3,4,5 };
	int* p = a;
	printf("%p\n", p); // a[0] 주소값 (a도 포인터임)

	int b = 5;
	int* b_p = &b;
	printf("%d\n", *b_p);
	printf("%d\n", b);

	*b_p = 10; // => b_p[0] = 10;
	printf("%d\n", *b_p);
	printf("%d\n", b);

	b_p[0] = 15; // => *b_p = 15;
	printf("%d\n", *b_p);
	printf("%d\n", b);

	// 1. 배열의 이름은 배열의 첫번째 요소의 주소를 가리키는 포인터로 동작한다.
	// 2. 배열의 요소에 접근할 때 배열의 인덱스를 사용하나 포인터의 역참조를 사용하나 둘 다 데이터에 접근이 가능하다.

	return 0;
}