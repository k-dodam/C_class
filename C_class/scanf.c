#include <stdio.h>
int main(void)
{
	/* scanf(->scanf_s)함수를 호출하기 위해 함께 전달되어야 하는 정보
	1. 입력할 데이터에 대응하는 자료형
	2. 입력할 데이터가 저장될 메모리 공간(변수)
	*/
	// visual studio에선 scanf_s 사용을 권장

	int num;
	/*
	scanf_s("%d", &num);
	scanf_s("%d\n", &num); // *틀림 (scanf_s는 입력함수이기 때문에 줄바꿈을 '출력'하는 것은 출력함수의 몫
	scanf_s("%d", &num); // 입력을 받은 다음
	printf("\n"); // 줄바꿈을 출력
	*/
	// scanf_s("입력 : %d", &num); // 틀림
	printf("입력 : ");
	scanf_s("%d", &num);

	int x, y, z, total;
	printf("정수 3개 입력 : ");
	scanf_s("%d %d %d", &x, &y, &z); // %d %d -> ' '으로 데이터 구분
	total = x + y + z;
	printf("%d + %d + %d = %d \n", x, y, z, total);

	float fnum;
	printf("실수 입력 : ");
	scanf_s("%f", &fnum);
	printf("입력된 값 : %0.2f\n", fnum);

	float scanf_pi;
	printf("원주율 입력 : ");
	scanf_s("%f", &scanf_pi);
	printf("입력된 값 : %f", scanf_pi); // %f의 서식지정자는 소수점 6째 자리까지 0으로 출력

	return 0;
}