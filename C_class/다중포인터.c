#include <stdio.h>
int main(void)
{
	int a = 5;
	int* p = &a;
	int** p2 = &p;
	int*** p3 = &p2;
	printf("%d\n", *p);

	return 0;
}