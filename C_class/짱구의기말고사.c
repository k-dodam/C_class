#include <stdio.h>
int main(void)
{
	// 짱구 : 국어 86, 영어 75, 수학 88, 사회 60, 과학 96
	// 평균은 실수로 출력
	int Korean = 86, English = 75, Math = 88, Society = 60, Science = 96;
	float Average = (Korean + English + Math + Society + Science) / 5.0f;
	printf("짱구의 기말고사 점수 평균 = %0.1f \n", Average);

	int total = 86 + 75 + 88 + 60 + 96;
	float avg = total / 5.0f;
	printf("짱구의 평균은 %0.1f점 입니다. \n", avg);

	// 철수 : 국어 64, 영어 56, 수학 87.5, 사회 76.8, 과학 96.9
	float total2 = 64 + 56 + 87.5f + 76.8f + 96.9f; // int로 선언 시 자동형변환으로 인해 소수점 데이터가 날아감
	float avg2 = total2 / 5.0f;
	printf("철수의 기말고사 점수 평균 = %0.2f \n", avg2);

	return 0;
}