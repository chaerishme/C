#include <stdio.h>

int get_num(void);

int main(void)
{
	int result;

	result = get_num();
	printf("반환값 : %d\n", result);
	return 0;
}

int get_num(void)							// 매개변수가 없고 반환형만 있다. void 넣어 매개변수 없음을 표현
{
	int num;

	printf("양수 입력 : ");
	scanf("%d", &num);

	return num;
}