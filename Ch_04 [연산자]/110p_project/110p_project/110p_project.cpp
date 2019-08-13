#include <stdio.h>

int main(void)
{
	int a = 74;
	printf("a의 값: %x\n", a); // 16진수
	printf("~a의 값: %x\n", ~a); // 16진수 (~연산자: 비트에 0값이 대입되어 있으면 1로 바꾸고, 1값이 대입되어 있으면 0으로 바꾼다.)
	printf("a + ~a의 연산 결과는: %x\n", a + ~a); // 16진수
	
	return 0;
}