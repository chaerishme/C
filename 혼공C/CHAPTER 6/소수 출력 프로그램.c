#include <stdio.h>
int main(void)
{
	int n, i, j, pn;						// pn���� �Ҽ� �Ǵ�
	int cnt = 0;

	printf("2 �̻��� ������ �Է��ϼ���. : ");
	scanf("%d", &n);
	
	for (i = 2; i < n; i++)
	{
		pn = 1;							// �Ҽ���� ���� pn = 1
		for (j = 2; j < i; j++)
		{
			if ((i % j) == 0)			// �Ҽ��� �ƴ� �� pn = 0
			{
				pn = 0;
				break;
			}
		}
		if (pn == 1)
		{
			printf("%5d", i);		// ������ ����
			cnt++;
			if ((cnt % 5) == 0)
			{
				printf("\n");
			}
		}
	}
	return 0;
}