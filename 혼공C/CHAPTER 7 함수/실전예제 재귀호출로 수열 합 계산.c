#include <stdio.h>

int res_sum(int n);

int main(void)
{
	int res;
	res = res_sum(10);
	printf("result : %d\n", res);

	return 0;
}

int res_sum(int n)
{
	if (n == 1) return 1;
	else return (n + res_sum(n - 1));
}