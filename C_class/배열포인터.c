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

	int arr2[2][3] = {
		{1,2,3},
		{4,5,6}
	};

	int(*arr2Ptr)[3] = arr2;

	for (int i = 0;i <= 1; i++) {
		for (int j = 0; j <= 2; j++) {
			printf("arr2[%d][%d] : %d\n", i, j, arr2Ptr[i][j]);
		}
	}
	return 0;
}