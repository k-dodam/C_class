#include <stdio.h>
int main(void)
{
	int a[3] = { 1,2,3 };
	int* p = a;

	int arr[3] = { 1,2,3 };
	int(*ptr)[3] = &arr;
	printf("첫 번재 요소 : %d\n", (*ptr)[0]);
	printf("두 번재 요소 : %d\n", (*ptr)[1]);
	printf("세 번재 요소 : %d\n", (*ptr)[2]);

	for (int i = 0; i <= 2; i++) {
		printf("arr[%d] : %d\n", i, (*ptr)[i]);
	}

	return 0;
}