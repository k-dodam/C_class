#include <stdio.h>
int main(void)
{
	/*
	for(�ʱⰪ; ���ǽ�; ������;){
		���ǽ��� ���̶�� �����ų �ڵ�;
	}
	*/

	int i;
	for (i = 10; i >= 1; i--) {
		printf("for�� %dȸ �ݺ���\n", i);
	}
	int a;
	for (a = 1; a <= 10; a++) {
		printf("%d �� ������ %d\n", a, a*a);
	}

	return 0;
}