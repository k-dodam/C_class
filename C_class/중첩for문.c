#include <stdio.h>
int main(void)
{
	/*
	for (;;) {
		for (;;) {

		}
	}
	*/

	int first, second;
	for (first = 1;first <= 3;first ++) {
		for (second = 1;second <= 2;second ++) {
			printf("%d�� %d��\n", first, second);
		}
		printf("%d �� ��\n\n", first);
	}

	int i, j; // �Ϲ������� �ٱ� for �� �������� i, ����(��ø) for �� �������� j�� �����
	for (i = 1; i <= 10; i++) {
		for (j = 1; j <= 10; j++) {
			printf("%d ���ϱ� %d = %d\n", i, j, i * j);
		}
		printf("%d�� ��\n", i);
	}

	return 0;
}