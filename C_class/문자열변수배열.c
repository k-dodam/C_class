#include <stdio.h>
int main(void)
{
	char string_text[] = "�ȳ��ϼ���!";
	printf("���ڿ� ���� string_text�� ���̴� : %zd\n", sizeof(string_text)); // �� 12����Ʈ -> �ѱ� �� ���� �� 2����Ʈ, ����ǥ 1����Ʈ, ���ڿ� ������ \0 1����Ʈ

	char english_text[] = "Hello!";
	printf("���� ���ڿ� englist_text�� ���̴� : %zd\n", sizeof(english_text));
	
	char long_text[50] = "This is long";
	printf("���ڿ� ���� long_text�� ���̴� : %zd\n", sizeof(long_text));

	// printf("�迭 long_text�� �ʱ�ȭ�� ���ڿ��� ���� : %zd\n", strien(long_text));
	
	printf("%s\n", long_text);

	char name[30] = "My name is Minji";
	printf("%s\n", name);
	
	name[11] ='\0';
	printf("%s\n", name);

	/*
	char scanf_string[50];
	printf("scanf_string ���ڿ��� �Է��ϼ��� : ");
	scanf_s("%s", scanf_string, (unsigned int)sizeof(scanf_string));
	printf("%s\n", scanf_string);
	*/

	char gets_string[50];
	printf("gets_s�� �Է��� ���ڿ� : ");
	gets_s( gets_string, sizeof(gets_string));
	printf("%s\n", gets_string);
	return 0; 
}