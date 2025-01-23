#include <stdio.h>
int main(void)
{
	int* P[5]; // => int* p1, * p2,* p3,* p4, *p5;
	int x = 3;
	P[1] = &x;
	printf("%d\n", *P[1]);

	// 길이가 3인 포인터 배열 선언, 정수형 변수 3개 선언
	// 포인터 배열에 각 변수의 주소를 저장한 수
	// for문을 이용해서 포인터 배열을 통해 각 변수에 들어있는 값 출력
	// 포인터배열[n]가 가리키는 값 : ?
	int* p[3];
	int a = 1, b = 2, c = 3;
	p[0] = &a;
	p[1] = &b;
	p[2] = &c;
	for (int i = 0;i <= 2;i++) {
		printf("포인터배열[%d]가 가리키는 값 : %d\n", i, *p[i]);
	}
	
	return 0;
}