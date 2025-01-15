#include <stdio.h>
int main(void)
{
	/*
	논리연산자
	|| (or) : 피연산자(연산대상데이터) 중 하나만 true여도 true라는 결과값을 반환
	&& (and) : 피연산자중 하나만 false여도 false라는 결과값을 반환 (-> 둘 다 true여야 됨)
	논리부정연산자
	! (not) : 피연산자가 true이면 false라는 반대값을 반환 (단항연산자)
	*/

	int one = 10, two = 20, three = 30, four = 40;
	int result;

	result = one > two || two >= three || three > four;
	// one > two -> F
	// two >= three -> F
	// three > four -> F
	printf("result : %d \n", result);

	result = one <= two && two <= three && three <= four;
	printf("result : %d \n", result);

	result = !(one > two);
	printf("result : %d \n", result);

	return 0;
}