#include <stdio.h>

int main(void)
{
	// 10 10.0
	// 8비트 = 1바이트

	long long max_number = 2200000000;
	printf("%lld \n", max_number)
		/*
		int max_number = 2200000000;
		printf("%d", max_number); ->X
		*/

		/*
		unsigned 와 signed
		unsigned 값의 범위 : 양수, (0~2^n-1 ex)8비트 -> 0~255
		signed 값의 범위 : 최상위 비트를 부호 비트로 사용(- or +, 0을 + 양수로 읽고 1을 - 음수로 읽음), -2^n~2^n-1 (양수는 0부터 시작, 음수는 -1부터 시작이므로 최솟값은 -2^n) ex) 8비트 -> -128~127
		unsigned int -> 최상위 비트를 부호 비트로 사용하지 않기 때문에 2200000000을 담을 수 있음
		*/;
	unsigned int max_num = 2200000000;
	printf("%u \n", max_num);

	int num1 = 1;
	printf("%d\n", num1, sizeof(num1));
	// sizeof -> int형은 4바이트이므로 4를 출력
	printf("%d \n", 100, sizeof(100));
	printf("%d \n", 3.14, sizeof(3.14));
	// sizeof(3.14) -> 8을 출력 -> sizeof는 알아서 자료형의 바이트를 찾아줌
	printf("%d \n", sizeof(float));
	printf("%d \n", sizeof(short));

	return 0;
}