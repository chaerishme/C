#include <stdio.h>
int main(void)
{
	int n, i, j, pn;						// pn으로 소수 판단
	int cnt = 0;

	printf("2 이상의 정수를 입력하세요. : ");
	scanf("%d", &n);
	
	for (i = 2; i < n; i++)
	{
		pn = 1;							// 소수라고 가정 pn = 1
		for (j = 2; j < i; j++)
		{
			if ((i % j) == 0)			// 소수가 아닐 때 pn = 0
			{
				pn = 0;
				break;
			}
		}
		if (pn == 1)
		{
			printf("%5d", i);		// 오른쪽 정렬
			cnt++;
			if ((cnt % 5) == 0)
			{
				printf("\n");
			}
		}
	}
	return 0;
}