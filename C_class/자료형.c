#include <stdio.h>

int main(void)
{
	// 10 10.0
	// 8��Ʈ = 1����Ʈ

	long long max_number = 2200000000;
	printf("%lld \n", max_number)
		/*
		int max_number = 2200000000;
		printf("%d", max_number); ->X
		*/

		/*
		unsigned �� signed
		unsigned ���� ���� : ���, (0~2^n-1 ex)8��Ʈ -> 0~255
		signed ���� ���� : �ֻ��� ��Ʈ�� ��ȣ ��Ʈ�� ���(- or +, 0�� + ����� �а� 1�� - ������ ����), -2^n~2^n-1 (����� 0���� ����, ������ -1���� �����̹Ƿ� �ּڰ��� -2^n) ex) 8��Ʈ -> -128~127
		unsigned int -> �ֻ��� ��Ʈ�� ��ȣ ��Ʈ�� ������� �ʱ� ������ 2200000000�� ���� �� ����
		*/;
	unsigned int max_num = 2200000000;
	printf("%u \n", max_num);

	int num1 = 1;
	printf("%d\n", num1, sizeof(num1));
	// sizeof -> int���� 4����Ʈ�̹Ƿ� 4�� ���
	printf("%d \n", 100, sizeof(100));
	printf("%d \n", 3.14, sizeof(3.14));
	// sizeof(3.14) -> 8�� ��� -> sizeof�� �˾Ƽ� �ڷ����� ����Ʈ�� ã����
	printf("%d \n", sizeof(float));
	printf("%d \n", sizeof(short));

	return 0;
}