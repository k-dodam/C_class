#include <stdio.h>
int main(void)
{
	// +, -, *, / �� ����
	// ���� : ������ 1��, ������ 2��
	// ������ -> Ư��ó��

	char character;
	int num1, num2;
	printf("�����ڸ� �Է��ϼ���. (+, -, *, /) : ");
	scanf_s("%c", &character, 1); // character������, n = ���ڸ� n�ڸ� �ްڴ�.
	printf("������ �Է��ϼ���. : ");
	scanf_s("%d", &num1);
	printf("������ �Է��ϼ���. : ");
	scanf_s("%d", &num2);

	switch (character) {
	case '+': printf("%d + %d = %d", num1, num2, num1 + num2);
		break;
	case '-': printf("%d - %d = %d", num1, num2, num1 - num2);
		break;
	case '*' : printf("%d * %d = %d", num1, num2, num1 * num2);
		break;
	case '/': 
		if (num2 != 0) {
			printf("%d / %d = %d", num1, num2, num1 / num2);
		}
		else {
			printf("������ ��꿡�� ������ 0�� �� �����ϴ�.");
		}
		break;
	default : printf("��ȿ���� ���� �����Դϴ�.");
	}

	return 0;
}