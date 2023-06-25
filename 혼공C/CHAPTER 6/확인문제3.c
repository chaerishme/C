#include <stdio.h>
int main(void)
{
	int i, j;
	for (i = 0; i < 5; i++)							// 행의 수
	{
		for (j = 0; j < 5; j++)						// 열의 수
		{
			if ((i == j) || (i + j == 4))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}