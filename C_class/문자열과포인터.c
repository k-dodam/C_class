#include <stdio.h>
int main(void)
{
	char good[] = "good";
	char* bad = "bad";
	printf("%s, %s\n", good, bad);

	good[0] = "H";
	// good[] = "new good"; �Ұ��� (�ּҸ� �ٲٴ� ��)
	// bad[0] = "s"; �Ұ��� (������ �ٲٴ� ��)
	bad = "new bad";
	printf("%s, %s\n", good, bad);

	return 0;
}