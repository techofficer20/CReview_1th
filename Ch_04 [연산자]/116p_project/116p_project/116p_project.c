#include <stdio.h>

int main(void)
{
	int a = 10;
	int b = 74;

	printf("a<<2의 연산 결과는: %x\n", a << 2); // 왼쪽으로 2비트만큼 이동한 값을 리턴함.
	printf("b<<2의 연산 결과는: %x\n", b << 2);

	return 0;
}