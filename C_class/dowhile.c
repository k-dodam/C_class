#include <stdio.h>
int main(void)
{
	/*
	�ڷ��� ������ = �ʱ�ȭ;
	do {
		�����ų �ڵ�;
		������;
	} while(���ǽ�);
	������ �������� �ʾƵ� �ּ� 1ȸ �ڵ带 ����
	(while���� �ּ� ���� Ƚ������ ���̰� ����)
	*/

	int do_while = 1;
	do {
		printf("do while�� %dȸ �ݺ���\n", do_while);
		do_while++;
	} while (do_while >= 10);

	return 0;
}