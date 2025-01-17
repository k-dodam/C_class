#include <stdio.h>
int main(void)
{
	/*
	자료형 변수명 = 초기값;
	while(조건){
		반복시키고자 하는 코드 작성;
		증감식;
	}
	*/

	int c_class = 1;
	while (c_class <= 10) {
		printf("c언어 수업 %d \n", c_class);
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