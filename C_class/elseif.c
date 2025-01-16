#include <stdio.h>
int main(void)
{
	/*
	if(조건문)
	{
		조건을 만족할 경우 실행할 코드;
	}
	else if(조건2문)
	{
		조건2를 만족할 경우 실행할 코드;
	}
	else if(조건3문)
	{
		조건3을 만족할 경우 실행할 코드;
	}
	...
	else
	{
		모든 조건을 만족하지 않을 경우 실행할 코드;
	}
	*/

	int num_a;
	printf("숫자 입력 : ");
	scanf_s("%d", &num_a);
	if (num_a > 3)
	{
		printf("고양이 \n");
	}
	else if (num_a == 1)
	{
		printf("강아지 \n");
	}
	else // 3 이하이면서 1이 아닌 수
	{
		printf("햄토리 \n");
	}

	// 학점이 90 이상이라면 A, 80 이상이라면 B, 70 이상이라면 C, 60 이상이라면 D, 모두 아니라면 재시험 출력
	int score;
	printf("학생의 점수를 입력하세요 : ");
	scanf_s("%d", &score);
	if (score >= 90)
	{
		printf("A \n");
	}
	else if (score >= 80)
	{
		printf("B \n");
	}
	else if (score >= 70)
	{
		printf("C \n");
	}
	else if (score >= 60)
	{
		printf("D \n");
	}
	else
	{
		printf("재시험 \n");
	}

	// 복합조건 버스비
	// 0세 ~ 7세 유아 -> 800원
	// 8세 ~ 19세 학생 -> 1200원
	// 20세 ~ 34세 청년 -> 1600원
	// 35세 ~ 59세 중년 -> 2000원
	// 60세 ~ 150세 노년 -> 무료
	// 모두 해당하지 않는다면 무언가 잘못됨을 감지... 사람이 아닌데...

	int age;
	printf("버스 이용자의 나이를 입력하세요. : ");
	scanf_s("%d", &age);
	if (0 <= age && age <= 7)
	{
		printf("유아 요금은 800원 입니다. \n");
	}
	else if (7 < age && age <= 19)
	{
		printf("학생 요금은 1200원 입니다. \n");
	}
	else if (19 < age && age <= 34)
	{
		printf("학생 요금은 1200원 입니다. \n");
	}
	else if (34 < age && age <= 59)
	{
		printf("중년 요금은 2000원 입니다. \n");
	}
	else if (59 < age && age <= 150)
	{
		printf("노년 요금은 무료 입니다. \n");
	}
	else
	{
		printf("사람이 아닌데.. \n");
	}
	return 0;
}