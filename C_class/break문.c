#include <stdio.h>
int main(void)
{
	/*
	for문의 break
	for(초기값; 조건식; 증감식){
		break;
		실행할 코드;
	}
	
	
	while문의 break
	자료형 변수명 = 초기화;
	while(조건식){
		break;
		실행할 코드;
		증감식;
	}
	*/

	for (int i = 0; i <= 10; i++) {
		if (i == 6) {
			break;
		}
		printf("%d\n", i);
	}

	printf("\n");

	int i = 0;
	while (i <= 10) {
		if (i == 6) {
			break;
		}
		printf("%d\n", i);
		i++;
	}

	return 0;
}