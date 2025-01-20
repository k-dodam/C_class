#include <stdio.h>
int main(void)
{
	/*
	자료형 변수명 = 초기화;
	do {
		실행시킬 코드;
		증감식;
	} while(조건식);
	조건을 충족하지 않아도 최소 1회 코드를 실행
	(while문과 최소 실행 횟수에서 차이가 있음)
	*/

	int do_while = 1;
	do {
		printf("do while문 %d회 반복중\n", do_while);
		do_while++;
	} while (do_while >= 10);

	return 0;
}