#include <stdio.h>
int main(void)
{
	/*
	for(초기값; 조건식; 증감식){
		continue;
		실행할 코드;
	}

	while(조건){
		증감식;
		continue;
		실행할코드;
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