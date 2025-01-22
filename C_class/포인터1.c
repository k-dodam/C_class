#include <stdio.h>
int main(void)
{
	// 주소 가져오기 : 변수의 주소를 얻으려면 &를 사용해서 가져올 것
	// 주소 따라가기 : 포인터를 통해 주소 안의 데이터에 접근하려면 *를 사용해서 접근
	

	// *정리
	// 1. 곱하기 : 별표(*)연산자를 기준으로 피연산자들이 숫자값이나 변수로 이루어져 있다면 곱하기 (숫자 or 변수 * 숫자 or 변수)
	// 2. 포인터 변수 : 좌측에 있는 피연산자가 자료형이라면 포인터 변수로 사용
	// 3. 역참조 : 별표(*)연산자가 단항으로 붙어있다면 역참조

	int a = 10;
	int * p = &a; // 포인터 변수
	printf("%p\n", &a);
	printf("%p\n", p); // 포인터 변수
	printf("%d\n", *p); // 역참조

	double d = 3.14;
	double * ptr = &d; // 포인터 변수
	printf("%p\n", &d);
	printf("%p\n", ptr); // 포인터 변수
	printf("%.2f\n", *ptr); // 역참조

	int PN = 30;
	int* pn;
	pn = &PN;



	// 포인터 선언 시 주의사항
	// 1. int* p
	// 2. int * p
	// 3. int *p
	// 4. int*p

	/*
	int a = 5;
	
	int * p; -> O
	*p = &a; -> X 이건 역참조에 값을 넣는 게 됨
	*/


	return 0;
}