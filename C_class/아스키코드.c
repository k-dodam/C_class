#include <stdio.h>
int main(void)
{
	char ch1 = 'A'; // ���ڴ� ���� ����ǥ�� ������� ��
	printf("%c \n", ch1);

	char ch2 = 65;
	printf("%c \n", ch2); // ���ڸ� �־��µ� A�� ����� �� ->����(A�� 65�� ��������)
	// A-Z : 65-90, a-z : 97-122 -> �ƽ�Ű�ڵ�!!

	printf("���� : %c, ���� : %d \n", ch1, ch1);
	printf("���� : %c, ���� : %d \n", ch2, ch2);

	int num3 = 'c';
	printf("���� : %c, ���� : %d \n", num3, num3);
	// int ������... -> 3����Ʈ�� ���� ���� >> char������ �ϴ� ���� ����

	return 0;
}