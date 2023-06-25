#include <stdio.h>

int main(void)
{
	int rank = 2, m = 0;

	switch (rank)			//rank의 값이 얼마인지 확인
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
	default:					//rank와 일치하는 case값이 없을 때
		m = 10;
		break;
	}

	printf("m : %d\n", m);

	return 0; 
}