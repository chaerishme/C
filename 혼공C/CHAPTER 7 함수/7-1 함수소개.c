#include <stdio.h>

int sum(int x, int y);				// sum 함수 선언

int main(void)						// main 함수 시작
{
	int a = 10, b = 20;
	int result;

	result = sum(a, b);			// sum 함수 호출
	printf("result : %d\n", result);

	return 0;
}

int sum(int x, int y)
{
	int temp;							// 두 정수의 합을 잠시 저장할 변수 (없어도 바로 반환 가능)

	temp = x + y;

	return temp;
}