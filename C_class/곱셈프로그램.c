#include <stdio.h>

/*
숫자 두가지를 가지고 곱셈하는 함수 생성
숫자 두가지는 사용자가 입력
출력형식 : 곱하기 연산 결과 a x b = c
*/

/*
두 가격 중 더 큰 값을 반환하는 함수
딸기가격, 귤 가격 입력받아서 더 비싼 과일 가격 출력
*/

int mul(a, b)
{

	return a * b;
}

int exp(str, tan)
{
	if (str > tan)
		return str;
	else
		return tan;
}

int main(void)
{
	int c, d;
	printf("두 숫자를 입력해주세요 : ");
	scanf_s("%d %d", &c, &d);
	int result = mul(c, d);
	printf("곱하기 연산 결과 %d * %d = %d\n", c, d, result);

	int strawb, tanger;
	printf("딸기 가격을 입력하세요 : ");
	scanf_s("%d", &strawb);
	printf("귤 가격을 입력하세요 : ");
	scanf_s("%d", &tanger);
	int price = exp(strawb, tanger);
	printf("더 비싼 과일의 가격은 %d원입니다.\n", price);
	
	return 0;
}