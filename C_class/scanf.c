#include <stdio.h>
int main(void)
{
	/* scanf(->scanf_s)�Լ��� ȣ���ϱ� ���� �Բ� ���޵Ǿ�� �ϴ� ����
	1. �Է��� �����Ϳ� �����ϴ� �ڷ���
	2. �Է��� �����Ͱ� ����� �޸� ����(����)
	*/
	// visual studio���� scanf_s ����� ����

	int num;
	/*
	scanf_s("%d", &num);
	scanf_s("%d\n", &num); // *Ʋ�� (scanf_s�� �Է��Լ��̱� ������ �ٹٲ��� '���'�ϴ� ���� ����Լ��� ��
	scanf_s("%d", &num); // �Է��� ���� ����
	printf("\n"); // �ٹٲ��� ���
	*/
	// scanf_s("�Է� : %d", &num); // Ʋ��
	printf("�Է� : ");
	scanf_s("%d", &num);

	int x, y, z, total;
	printf("���� 3�� �Է� : ");
	scanf_s("%d %d %d", &x, &y, &z); // %d %d -> ' '���� ������ ����
	total = x + y + z;
	printf("%d + %d + %d = %d \n", x, y, z, total);

	float fnum;
	printf("�Ǽ� �Է� : ");
	scanf_s("%f", &fnum);
	printf("�Էµ� �� : %0.2f\n", fnum);

	float scanf_pi;
	printf("������ �Է� : ");
	scanf_s("%f", &scanf_pi);
	printf("�Էµ� �� : %f", scanf_pi); // %f�� ���������ڴ� �Ҽ��� 6° �ڸ����� 0���� ���

	return 0;
}