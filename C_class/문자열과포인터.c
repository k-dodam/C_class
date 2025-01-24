#include <stdio.h>
int main(void)
{
	char good[] = "good";
	char* bad = "bad";
	printf("%s, %s\n", good, bad);

	good[0] = "H";
	// good[] = "new good"; 불가능 (주소를 바꾸는 것)
	// bad[0] = "s"; 불가능 (내용을 바꾸는 것)
	bad = "new bad";
	printf("%s, %s\n", good, bad);

	return 0;
}