#include <stdio.h>

int main(void)
{
	int a = 74;
	int b = 19;

	printf("a | b의 연산 결과는: %x\n", a | b); // | 연산: 두 개의 비트 중 하나라도 1이면 1 리턴, 모두 0일 때에만 0 리턴

	return 0;
}