#include <stdio.h>

double centi_to_meter(int cm);

int main(void)
{
	double res;
	res = centi_to_meter(187);
	printf("%.2lfm\n", res);

	return 0;
}

double centi_to_meter(int cm)
{
	double m;
	m = cm / 100.0;						// ������ 100.0 ���� (100���� ������ ��� 1.00m)
	return m;
}