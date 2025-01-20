#include <stdio.h>
int main(void)
{
	/*
	for(초기값; 조건식; 증감식;){
		조건식이 참이라면 실행시킬 코드;
	}
	*/

	int i;
	for (i = 10; i >= 1; i--) {
		printf("for문 %d회 반복중\n", i);
	}
	int a;
	for (a = 1; a <= 10; a++) {
		printf("%d 의 제곱은 %d\n", a, a*a);
	}

	return 0;
}