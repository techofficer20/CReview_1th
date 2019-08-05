#include <stdio.h>

int main(void)
{
	short a = 32766;
	short b = 10;
	short c = a + b;
	int d = a + b;

	printf("정수형 a의 값 %d와 b의 값 %d의 합은 %d 이다.\n", a, b, c); // 범위 벗어남
	printf("정수형 a의 값 %d와 b의 값 %d의 합은 %d 이다.\n", a, b, d);

	return 0;
}