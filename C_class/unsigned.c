#include <stdio.h>
int main(void)
{
	unsigned char ch; // 0 ~ 255 (원래 : -128 ~ 127)
	unsigned short sh; // 0 ~ 65,535 (원래 : -32,768 ~ 32,767)
	unsigned int in; // 0 ~ -4,294,967,295 (원래 : -21억 ~ 21억)

	ch = 128;
	sh = 50000;
	in = 4100000000;

	printf("%d\n", ch);
	printf("%d\n", sh);
	printf("%u\n", in); // %d = int 값 내에서만 출력

	char num;
	num = 255;
	printf("%d\n", num); // 범위 안 맞아서 -1이 출력 (char->int 바꿔야 됨)

	return 0;
}