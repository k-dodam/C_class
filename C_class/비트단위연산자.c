#include<stdio.h>
int main(void)
{
	/*
	��Ʈ������������(������ ���)
	|| (or) : �����ϴ� �� ��Ʈ�� �� �� 1�� �ϳ��� ������ 1��, �ƴϸ� 0�� ��ȯ
	& (and) : ����ϴ� �� ��Ʈ�� ���� ��� 1�̸� 1��, �ƴϸ� 0�� ��ȯ
	^ (xor) : �����ϴ� ��Ʈ�� ���� �ٸ��� 1�� ��ȯ
	~ (not) : ��Ʈ�� ���� 1�̸� 0����, 0�̸� 1�� ��Ʈ ���� ����
	*/

	int bit_five = 5; // 5 -������> 00000101
	int bit_three = 3; // 3 -������> 00000011
	printf("bit_five | bit_three = %d \n", bit_five | bit_three); // 00000001
	printf("bit_five & bit_three = %d \n", bit_five & bit_three); // 00000111
	printf("bit_five ^ bit_three = %d \n", bit_five ^ bit_three); // 00000110
	printf("~%d = %d \n", bit_five, ~bit_five);

	return 0;
}