#include <stdio.h>
int main(void)
{
	/*
	for (;;) {
		for (;;) {

		}
	}
	*/

	int first, second;
	for (first = 1;first <= 3;first ++) {
		for (second = 1;second <= 2;second ++) {
			printf("%d행 %d열\n", first, second);
		}
		printf("%d 행 끝\n\n", first);
	}

	int i, j; // 일반적으로 바깥 for 문 변수명은 i, 안쪽(중첩) for 문 변수명은 j를 사용함
	for (i = 1; i <= 10; i++) {
		for (j = 1; j <= 10; j++) {
			printf("%d 곱하기 %d = %d\n", i, j, i * j);
		}
		printf("%d단 끝\n", i);
	}

	return 0;
}