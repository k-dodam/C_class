#include <stdio.h>
int main(void)
{
	/*
	for(�ʱⰪ; ���ǽ�; ������){
		continue;
		������ �ڵ�;
	}

	while(����){
		������;
		continue;
		�������ڵ�;
	}
	*/

	int con;
	for (con = 0; con <= 10; con++) {
		if (con % 2 == 0) {
			continue;
		}
	printf("%d\n", con);
	}

	printf("\n");

	con = 1;
	while (con <= 10) {
		con++;
		if (con % 2 != 0) {
			continue;
		}
	printf("%d\n", con);
	}

	return 0;
}