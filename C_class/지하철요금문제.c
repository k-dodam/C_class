#include <stdio.h>
int main(void)
{
	// 사용자가 20세 이상이면 1280원, 미만이라면 800원 받는 프로그램
	int user_age;
	printf("사용자의 나이를 입력하세요. : ");
	scanf_s("%d", &user_age);
	int user_age2 = user_age >= 20 ? 1280 : 800;
	printf("%d 세인 사용자의 지하철 요금은 %d원 입니다.", user_age, user_age2);
	return 0;
}