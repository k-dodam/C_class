#include <stdio.h>
void SayHello()
{
	printf("Hello World!\n");
}

int add(int a, int b)
{
	return a + b;
}

void name(char* name)
{
	printf("Hello, %s\n", name);
}

int main(void)
{
	/*
	��ȯ�� �Լ��̸�(�Ű�����)
	{
		return ������ ��;
	}
	��ȯ�� : �Լ��� ����� ��Ÿ�� �� ����� �ڷ���
	�Լ� �̸� : ȣ���� �� ����� �̸�(������ ����)
	�Ű����� : �Լ��� �۾��� �����ϱ� ���� �ʿ��� �Է°�(�������� ����)
	return : �Լ��� �۾��� ���� �� ȣ���� ������ �����ִ� ��ɾ� (void �� �� ��������)
	*/
	SayHello();

	int result = add(5, 3);
	printf("result : %d\n", result);

	//name("����");

	return 0;
}