#include <stdio.h>

int number = 50;

void static_function()
{
	static int num = 0;
	num++;
	printf("num : %d\n", num);
	// static 정수형 변수명 = n; -> 프로그램이 끝날 때까지 소멸 x
}

int local_function(int a)
{
	int result = 5;
	return number + a;
}

int main(void)
{
	int a = 100;
	printf("%d\n", a);

	int result = local_function(a);
	printf("%d\n", result);


	int number = 40;
	printf("%d\n", number);

	static_function();
	static_function();
	static_function();
	static_function();
	static_function();

	/*
	지역변수
	1. 중괄호(함수스코프) 내에 선언된 모든 변수는 해당 함수에서만 사용 가능
	2. 함수를 실행할 때 사용하는 재료인 매개벼눗도 결국 지역변수
	3. 지역변수는 자신이 선언된 지역 외 다른 지역(함수)에서는 사용 불가
	4. 변수의 이름은 중복할 수 없으며, 다른 함수에서는 중복 가능

	전역변수
	1. 함수스코프 밖에 선언된 변수
	2. 모든 지역(함수)에서 사용 가능
	3. 지역(함수)내에 이름이 동일한 변수가 있다면 지역변수가 우선
	4. 프로그램 시작과 함께 메모리 공간이 할당되며, 프로그램 종료 시까지 존재

	스테틱변수
	1. static이라는 키워드를 통해 선언
	2. 지역변수, 전역변수 모두 선언 가능
	3. 지역변수와 함께 사용 시 함수를 호출 후 기능이 끝나도 메모리 소멸 X
	4. 프로그램 종료 시까지 메모리 공간 유지
	*/

	return 0;
}