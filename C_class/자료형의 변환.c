#include <stdio.h>
int main(void)
{
	// �ڵ� ����ȯ
	double change_number = 10;
	printf("%f\n", change_number); // ��� 10.000	000 (10�� �ƴ� 10.000000 -> �ڵ� ����ȯ (double���� �Ҽ��� 6�ڸ����� ���))

	int change_number2 = 5.112233;
	printf("%d\n", change_number2);  // ��� 5 (5.112233�� �ƴ� 5 -> �ڵ� ����ȯ)

	printf("%d\n", (int)1.1234);
	printf("%d\n", (short)1.1234);
	printf("%f\n", (double)22);
	printf("%f\n", (float)22);
	printf("%zd\n", sizeof(3.14)); // sizeof ���������� %zd

	float f = 3.14;
	printf("%f\n", f);
	// �ڵ� �������� f�� ���̸� ��� �޽��� �����

	return 0;
}