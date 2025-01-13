#include <stdio.h>
int main(void)
{
	// 자동 형변환
	double change_number = 10;
	printf("%f\n", change_number); // 출력 10.000	000 (10이 아닌 10.000000 -> 자동 형변환 (double형은 소숫점 6자리까지 출력))

	int change_number2 = 5.112233;
	printf("%d\n", change_number2);  // 출력 5 (5.112233이 아닌 5 -> 자동 형변환)

	printf("%d\n", (int)1.1234);
	printf("%d\n", (short)1.1234);
	printf("%f\n", (double)22);
	printf("%f\n", (float)22);
	printf("%zd\n", sizeof(3.14)); // sizeof 서식지정자 %zd

	float f = 3.14;
	printf("%f\n", f);
	// 코드 마지막에 f를 붙이면 경고 메시지 사라짐

	return 0;
}