#include <stdio.h>
int main(void)
{
	/*
	�ڷ��� ������ = �ʱⰪ;
	while(����){
		�ݺ���Ű���� �ϴ� �ڵ� �ۼ�;
		������;
	}
	*/

	int c_class = 1;
	while (c_class <= 10) {
		printf("c��� ���� %d \n", c_class);
		c_class++;
	}

	printf("\n");

	int num = 1;
	while (num <= 10) {
		printf("%d \n", 6 * num);
		num++;
	}

	printf("\n");

	int Num = 1;
	while (Num <= 60) {
		if(Num % 6 == 0){
			printf("%d \n", Num);
		}
		Num++;
	}
	return 0;
}