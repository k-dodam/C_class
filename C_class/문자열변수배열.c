#include <stdio.h>
int main(void)
{
	char string_text[] = "안녕하세요!";
	printf("문자열 변수 string_text의 길이는 : %zd\n", sizeof(string_text)); // 총 12바이트 -> 한글 한 글자 당 2바이트, 느낌표 1바이트, 문자열 끝맺음 \0 1바이트

	char english_text[] = "Hello!";
	printf("영어 문자열 englist_text의 길이는 : %zd\n", sizeof(english_text));
	
	char long_text[50] = "This is long";
	printf("문자열 변수 long_text의 길이는 : %zd\n", sizeof(long_text));

	// printf("배열 long_text에 초기화된 문자열의 길이 : %zd\n", strien(long_text));
	
	printf("%s\n", long_text);

	char name[30] = "My name is Minji";
	printf("%s\n", name);
	
	name[11] ='\0';
	printf("%s\n", name);

	/*
	char scanf_string[50];
	printf("scanf_string 문자열을 입력하세요 : ");
	scanf_s("%s", scanf_string, (unsigned int)sizeof(scanf_string));
	printf("%s\n", scanf_string);
	*/

	char gets_string[50];
	printf("gets_s로 입력할 문자열 : ");
	gets_s( gets_string, sizeof(gets_string));
	printf("%s\n", gets_string);
	return 0; 
}