#include <stdio.h>

// 변수를 하나 만들기 (임시공간)
// 매개변수로 전달받은 첫번째 인자값을 임시공간에 넣어놓고
// 두번째 매개변수로 받아온 인자값을 첫번째 매개변수에 넣음
// 그 후 임시공간에 있는 인자값을 두번째 매개변수에 넣기

void swap(int * x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main(void)
{
	int a = 3, b = 5;
	swap(&a, &b);
	printf("%d %d\n", a, b);

	/*
	call-by-value : 복사하는 원리 (값 전달을 위함)
	call-by-reference : 주소를 전달하는 원리
	*/
	
	return 0;
}