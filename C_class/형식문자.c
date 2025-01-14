#include <stdio.h>
int main(void)
{
	// %d : char, short, int (부호 있는 10진 정수)
	// %ld : long (부호 있는 10진 정수)
	// %lld : long long (부호 있는 10진 정수
	// %u : unsinged int (부호 없는(=부호 비트를 사용하지 않는) 10진 정수)
	// %f : float (10진수 방식의 부동소수점 실수)
	// %lf : long double, double
	// %x : float, double
	// %c : char, short, int (값에 대응하는 문자)
	// %s : 문자열
	// %p : 포인터 주소값
	// %i : int 출력

	int x = 2100000000;
	printf("값 : %d\n", x);

	long long x2 = 2200000000;
	printf("값 : %lld\n", x2);

	printf("%10d\n", 42); // ("%@d", n) 에서 @ = 필드폭!(최소 사용하는 칸의 수)
	printf("%5d\n", 12345); // 출력할 수가 필드폭 보다 칸 수가 큼 -> 필드폭 무시
	printf("%-10d1\n", 123456); // 왼쪽에 10칸 만들고 왼쪽 정렬
	printf("%010d\n", 123456); // 필드폭에 010을 넣음 -> 빈칸이 0으로 채워짐
	printf("%8.3f\n", 3.14159); // 8 -> 칸 개수 , .2 -> 소수점 자리수 + 반올림

	return 0;
}