#include <stdio.h>

int main(void)
{
	int a = 10;
	int b = 11;
	int c = 12;
	int d = 10;

	// 0: false, 1: true
	printf("a == b 의 결과는 : %d\n", a == b);
	printf("a < b 의 결과는 : %d\n", a < b);
	printf("a > c 의 결과는 : %d\n", a > c);
	printf("a == d 의 결과는 : %d\n", a == d);

	return 0;
}