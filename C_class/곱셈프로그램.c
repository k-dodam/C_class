#include <stdio.h>

/*
���� �ΰ����� ������ �����ϴ� �Լ� ����
���� �ΰ����� ����ڰ� �Է�
������� : ���ϱ� ���� ��� a x b = c
*/

/*
�� ���� �� �� ū ���� ��ȯ�ϴ� �Լ�
���Ⱑ��, �� ���� �Է¹޾Ƽ� �� ��� ���� ���� ���
*/

int mul(a, b)
{

	return a * b;
}

int exp(str, tan)
{
	if (str > tan)
		return str;
	else
		return tan;
}

int main(void)
{
	int c, d;
	printf("�� ���ڸ� �Է����ּ��� : ");
	scanf_s("%d %d", &c, &d);
	int result = mul(c, d);
	printf("���ϱ� ���� ��� %d * %d = %d\n", c, d, result);

	int strawb, tanger;
	printf("���� ������ �Է��ϼ��� : ");
	scanf_s("%d", &strawb);
	printf("�� ������ �Է��ϼ��� : ");
	scanf_s("%d", &tanger);
	int price = exp(strawb, tanger);
	printf("�� ��� ������ ������ %d���Դϴ�.\n", price);
	
	return 0;
}