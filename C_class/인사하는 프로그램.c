#include <stdio.h>
void name(char* name)
{
	printf("�ȳ��ϼ��� %s�� �ݰ����ϴ�.\n", name);
}
int main(void)
{
	char a[50];
	printf("�̸��� �Է����ּ��� : ");
	scanf_s("%s", a,(unsigned) sizeof(a));
	name(a);

	return 0;
}