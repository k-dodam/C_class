#include <stdio.h>
int main(void)
{
	// 길이가 8인 배열 arr을 선언 및 1,2,3,4,5,6,7,8 로 초기화 한 후 해당 배열 마지막 요소를 가리키는 포인터 변수 ptr 선언
	// ptr 포인터 변수에 저장된 값을 감소시키는 방식으로 배열의 모든 요소에 접근
	// 배열 요소 중 홀수에 해당하는 값들의 총 합을 구하는 코드 작성

	// 배열, 포인터변수, 홀수값의 총 합을 넣을 변수, for문 사용하여 배열에 접근, if문 사용하여 홀수 가림

	int arr[8] = { 1,2,3,4,5,6,7,8 };
	int* p = arr + 7;
	int a = 0;

	for (int i = 1; i <= 8; i++) {
		if (*p % 2 !=0) {
			a += *p;
		}
		p--;
	}
	printf("%d\n", a);
	return 0;
}