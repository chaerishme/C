#include <stdio.h>

int main(void)
{
	int rank = 2, m = 0;

	switch (rank)			//rank�� ���� ������ Ȯ��
	{
	case 1:
		m = 300;
		break;
	case 2:
		m = 200;
		break;
	case 3:
		m = 100;
		break;
	default:					//rank�� ��ġ�ϴ� case���� ���� ��
		m = 10;
		break;
	}

	printf("m : %d\n", m);

	return 0; 
}