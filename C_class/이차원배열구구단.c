#include <stdio.h>
int main(void)
{
	// 2���� �迭 ���� �� �������� ���

	int a[8][9];
	int i, j;
	for(i = 0; i <= 7; i++) {
		printf("%d��\n", i + 2);
		for (j = 0; j <= 8;j++) {
			a[i][j] = (i + 2) * (j + 1);
			printf("%d * %d = %d\n", i+2, j + 1, a[i][j]);
		}
		printf("\n");
	}


	return 0;
}