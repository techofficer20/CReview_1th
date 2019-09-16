#include <stdio.h>
int main(void)
{
	int a = 10;
	int b;
	double d = 3.14;

	b = a + d; // d 소수부 손실

	printf("연산 결과는 : %d 입니다.\n", b);

	return 0;
}