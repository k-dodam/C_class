#include <stdio.h>
int main(void)
{
	// ����ڰ� 20�� �̻��̸� 1280��, �̸��̶�� 800�� �޴� ���α׷�
	int user_age;
	printf("������� ���̸� �Է��ϼ���. : ");
	scanf_s("%d", &user_age);
	int user_age2 = user_age >= 20 ? 1280 : 800;
	printf("%d ���� ������� ����ö ����� %d�� �Դϴ�.", user_age, user_age2);
	return 0;
}