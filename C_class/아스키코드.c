#include <stdio.h>
int main(void)
{
	char ch1 = 'A'; // 문자는 작은 따옴표로 묶어줘야 됨
	printf("%c \n", ch1);

	char ch2 = 65;
	printf("%c \n", ch2); // 숫자를 넣었는데 A가 출력이 됨 ->맵핑(A와 65의 대응관계)
	// A-Z : 65-90, a-z : 97-122 -> 아스키코드!!

	printf("문자 : %c, 숫자 : %d \n", ch1, ch1);
	printf("문자 : %c, 숫자 : %d \n", ch2, ch2);

	int num3 = 'c';
	printf("문자 : %c, 숫자 : %d \n", num3, num3);
	// int 형으로... -> 3바이트의 공간 낭비 >> char형으로 하는 것이 좋음

	return 0;
}