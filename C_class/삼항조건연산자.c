#include <stdio.h>
int main(void)
{
	// ���ǽ� ?  ������ �̰� ��µ�(true) : Ʋ���� �̰� ��µ�(false)

	int ten = 10, twenty = 20;
	int result;
	result = ten > twenty ? ten : twenty;
	printf("�� ū ���� : %d \n", result);

	// ���� 1 : ����ڿ��� ���ڸ� �Է¹޾Ƽ� �� ���ڰ� ¦����� 0�� ���, Ȧ����� 1�� ���
	// ��� �޽��� : ����� �Է��� ���ڴ� *�̸� ��� : *
	int num;
	printf("���� �Է� : ");
	scanf_s("%d", &num);
	int Result;
	Result = num % 2 == 0? 0 : 1;
	printf("����� �Է��� ���ڴ� %d�̸� ��� : %d \n", num, Result);

	int input_number;
	int result2;
	printf("�����ϴ� ���ڸ� �Է��غ����� : ");
	scanf_s("%d", &input_number);
	result2 = input_number % 2 == 0 ? 0 : 1;
	printf("����� �����ϴ� ���ڴ� %d�̸�, ��� : %d", input_number, result2);


	return 0;
}