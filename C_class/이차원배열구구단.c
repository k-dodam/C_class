#include <stdio.h>
int main(void)
{
	// 2차원 배열 선언 후 구구단을 출력

	int a[8][9];
	int i, j;
	for(i = 0; i <= 7; i++) {
		printf("%d단\n", i + 2);
		for (j = 0; j <= 8;j++) {
			a[i][j] = (i + 2) * (j + 1);
			printf("%d * %d = %d\n", i+2, j + 1, a[i][j]);
		}
		printf("\n");
	}


	return 0;
}