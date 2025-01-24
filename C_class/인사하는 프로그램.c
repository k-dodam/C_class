#include <stdio.h>
void name(char* name)
{
	printf("안녕하세요 %s님 반갑습니다.\n", name);
}
int main(void)
{
	char a[50];
	printf("이름을 입력해주세요 : ");
	scanf_s("%s", a,(unsigned) sizeof(a));
	name(a);

	return 0;
}