#include <stdio.h>
int main(void)
{
	// 조건식 ?  맞으면 이게 출력됨(true) : 틀리면 이게 출력됨(false)

	int ten = 10, twenty = 20;
	int result;
	result = ten > twenty ? ten : twenty;
	printf("더 큰 값은 : %d \n", result);

	// 조건 1 : 사용자에게 숫자를 입력받아서 그 숫자가 짝수라면 0을 출력, 홀수라면 1을 출력
	// 출력 메시지 : 당신이 입력한 숫자는 *이며 결과 : *
	int num;
	printf("숫자 입력 : ");
	scanf_s("%d", &num);
	int Result;
	Result = num % 2 == 0? 0 : 1;
	printf("당신이 입력한 숫자는 %d이며 결과 : %d \n", num, Result);

	int input_number;
	int result2;
	printf("좋아하는 숫자를 입력해보세요 : ");
	scanf_s("%d", &input_number);
	result2 = input_number % 2 == 0 ? 0 : 1;
	printf("당신이 좋아하는 숫자는 %d이며, 결과 : %d", input_number, result2);


	return 0;
}