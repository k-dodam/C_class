#include <stdio.h>
int main(void)
{
	// 주소 가져오기 : 변수의 주소를 얻으려면 &를 사용해서 가져올 것
	// 주소 따라가기 : 포인터를 통해 주소 안의 데이터에 접근하려면 *를 사용해서 접근
	
	int a = 10;
	double b = 3.14;
	int *p = &a;

	printf("%p", &a);
	return 0;
}