#include <stdio.h>

int sum(int x, int y);				// sum �Լ� ����

int main(void)						// main �Լ� ����
{
	int a = 10, b = 20;
	int result;

	result = sum(a, b);			// sum �Լ� ȣ��
	printf("result : %d\n", result);

	return 0;
}

int sum(int x, int y)
{
	int temp;							// �� ������ ���� ��� ������ ���� (��� �ٷ� ��ȯ ����)

	temp = x + y;

	return temp;
}