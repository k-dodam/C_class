#include <stdio.h>
int main(void)
{
	// ¯�� : ���� 86, ���� 75, ���� 88, ��ȸ 60, ���� 96
	// ����� �Ǽ��� ���
	int Korean = 86, English = 75, Math = 88, Society = 60, Science = 96;
	float Average = (Korean + English + Math + Society + Science) / 5.0f;
	printf("¯���� �⸻��� ���� ��� = %0.1f \n", Average);

	int total = 86 + 75 + 88 + 60 + 96;
	float avg = total / 5.0f;
	printf("¯���� ����� %0.1f�� �Դϴ�. \n", avg);

	// ö�� : ���� 64, ���� 56, ���� 87.5, ��ȸ 76.8, ���� 96.9
	float total2 = 64 + 56 + 87.5f + 76.8f + 96.9f; // int�� ���� �� �ڵ�����ȯ���� ���� �Ҽ��� �����Ͱ� ���ư�
	float avg2 = total2 / 5.0f;
	printf("ö���� �⸻��� ���� ��� = %0.2f \n", avg2);

	return 0;
}