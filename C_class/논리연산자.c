#include <stdio.h>
int main(void)
{
	/*
	��������
	|| (or) : �ǿ�����(����������) �� �ϳ��� true���� true��� ������� ��ȯ
	&& (and) : �ǿ������� �ϳ��� false���� false��� ������� ��ȯ (-> �� �� true���� ��)
	������������
	! (not) : �ǿ����ڰ� true�̸� false��� �ݴ밪�� ��ȯ (���׿�����)
	*/

	int one = 10, two = 20, three = 30, four = 40;
	int result;

	result = one > two || two >= three || three > four;
	// one > two -> F
	// two >= three -> F
	// three > four -> F
	printf("result : %d \n", result);

	result = one <= two && two <= three && three <= four;
	printf("result : %d \n", result);

	result = !(one > two);
	printf("result : %d \n", result);

	return 0;
}