#include <stdio.h>

int number = 50;

void static_function()
{
	static int num = 0;
	num++;
	printf("num : %d\n", num);
	// static ������ ������ = n; -> ���α׷��� ���� ������ �Ҹ� x
}

int local_function(int a)
{
	int result = 5;
	return number + a;
}

int main(void)
{
	int a = 100;
	printf("%d\n", a);

	int result = local_function(a);
	printf("%d\n", result);


	int number = 40;
	printf("%d\n", number);

	static_function();
	static_function();
	static_function();
	static_function();
	static_function();

	/*
	��������
	1. �߰�ȣ(�Լ�������) ���� ����� ��� ������ �ش� �Լ������� ��� ����
	2. �Լ��� ������ �� ����ϴ� ����� �Ű������� �ᱹ ��������
	3. ���������� �ڽ��� ����� ���� �� �ٸ� ����(�Լ�)������ ��� �Ұ�
	4. ������ �̸��� �ߺ��� �� ������, �ٸ� �Լ������� �ߺ� ����

	��������
	1. �Լ������� �ۿ� ����� ����
	2. ��� ����(�Լ�)���� ��� ����
	3. ����(�Լ�)���� �̸��� ������ ������ �ִٸ� ���������� �켱
	4. ���α׷� ���۰� �Բ� �޸� ������ �Ҵ�Ǹ�, ���α׷� ���� �ñ��� ����

	����ƽ����
	1. static�̶�� Ű���带 ���� ����
	2. ��������, �������� ��� ���� ����
	3. ���������� �Բ� ��� �� �Լ��� ȣ�� �� ����� ������ �޸� �Ҹ� X
	4. ���α׷� ���� �ñ��� �޸� ���� ����
	*/

	return 0;
}