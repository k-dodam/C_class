#include <stdio.h>
int main(void)
{
	/*
	if(���ǽ�)
		{
		������ ������ ��� ������ �ڵ带 �ۼ�;
		}
	if���� �Ұ�ȣ(����)���� true, false �� �����µ� true�� ��쿡�� {�߰�ȣ} �ڵ带 ����, false�� ���� �ƹ��� �ൿ�� �Ͼ�� ����
	else
		{
		������ �������� ���� ��� ������ �ڵ带 �ۼ�;
		}

	if(���ǽ�)
		������ �ڵ尡 �� ���̶�� {�߰�ȣ} ���� ���� (�����ص� �ǰ� �� �ص� ��)
	*/

	int if_number = 10;
	if(if_number < 500)
	{
		printf("%d < 500 ? �� ���� ������ �� �Դϴ�. \n", if_number);
	}

	if (if_number == 3)
	{
		printf("%d = 3", if_number);
	}

	// ����ڷκ��� �������� �Է¹޾� ���� ���� ���ǹ����� �����, 10000�� �̻��� ��, �Ϸ翡 n�� �ȴٴ� ����ؿ�! �� ���
	int input;
	printf("������� �������� �Է����ּ��� : ");
	scanf_s("%d", &input);
	if (input > 10000)
	{
		printf("�Ϸ翡 %d�� �ȴٴ� ����ؿ�! \n", input);
	}

	char alphabet = 'A';
	if (alphabet == 'B')
	{
		printf("alphabet�� B �Դϴ�. \n");
	}
	else
	{
		printf("alphabet�� B�� �ƴմϴ�. \n");
	}

	int like_number;
	printf("�����ϴ� ���ڸ� �Է����ּ���! : ");
	scanf_s("%d", &like_number);
	if (like_number >= 10)
	{
		printf("�����ϴ� ���ڰ� 10 �̻��̱���!");
	}
	else
	{
		printf("�����ϴ� ���ڰ� 10 �̸��̱���!");
	}
	return 0;
}