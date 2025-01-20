#include <stdio.h>
int main(void)
{
	// while문을 사용하여 사용자가 0을 입력할 때까지 프로그램이 끝나지 않음
	// 사용자가 어떤 숫자를 입력했다면 ( 입력한 숫자는 n입니다. (0 입력시 종료) 출력)

	int num;
	printf("숫자를 입력해주세요. : ");
	scanf_s("%d", &num);
	while (num != 0) {
		printf("입력한 숫자는 %d 입니다. (0 입력시 종료)\n", num);
		printf("숫자를 입력해주세요. : ");
		scanf_s("%d", &num);
	}

	return 0;
}
