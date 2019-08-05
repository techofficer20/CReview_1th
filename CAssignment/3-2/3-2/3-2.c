/*
사용자로부터 3개의 정수를 입력 받아서, 3개의 수를 곱한 결과를 출력하라.
출력 예)
세 개의 정수를 입력 하세요: 2 3 4
세 수의 곱은 24 이다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c;
	int result;
	printf("세 개의 정수를 입력 하세요: ");
	scanf("%d %d %d", &a, &b, &c);
	result = a * b * c;
	printf("세 수의 곱은 %d 이다.\n", result);

	return 0;
}