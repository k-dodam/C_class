#include <stdio.h>
int main(void)
{
	// ������ ������ ���� ����
	// ������ ����ִ� �� : ������ �ּҰ� 

	int a = 10;
	int* p = &a;
	printf("%p : %d", p, *p);

	return 0;
}