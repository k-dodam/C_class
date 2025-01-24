#include <stdio.h>
void SayHello()
{
	printf("Hello World!\n");
}

int add(int a, int b)
{
	return a + b;
}

void name(char* name)
{
	printf("Hello, %s\n", name);
}

int main(void)
{
	/*
	변환형 함수이름(매개변수)
	{
		return 리턴할 값;
	}
	반환형 : 함수의 결과를 나타낼 때 사용할 자료형
	함수 이름 : 호출할 때 사용할 이름(개발자 마음)
	매개변수 : 함수가 작업을 수행하기 위해 필요한 입력값(없을수도 있음)
	return : 함수가 작업을 끝낸 뒤 호출할 곳으로 돌려주는 명령어 (void 일 땐 생략가능)
	*/
	SayHello();

	int result = add(5, 3);
	printf("result : %d\n", result);

	//name("민지");

	return 0;
}