#include <stdio.h>
int main(void)
{
	/*
	����������
	���� ++ or ++ ���� (����)
	���� -- or -- ���� (����)
	*/

	// ���� ++ �� ++ ������ ����
	int put_a = 10, put_b = 20;
	printf("A : %d \n", put_a); // 10
	printf("A : %d \n", ++ put_a); // 11
	printf("A : %d \n", put_a); // 11
	printf("\n");
	printf("A : %d \n", put_b); // 20
	printf("A : %d \n", put_b ++); // 20
	printf("A : %d \n", put_b); // 21

	return 0;
}