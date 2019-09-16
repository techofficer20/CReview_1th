/*
사용자로부터 세 개의 정수 a, b, c를 입력 받고, 이 변수들을 다음과 같은 연산식에 의거하여
연산 결과를 출력하는 프로그램을 작성하라.
(a * b) + (b / c) * (a % c)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int input1, input2, input3;
	int result;

	printf("세 수 입력: ");
	scanf("%d %d %d", &input1, &input2, &input3);

	result = (input1 * input2) + (input2 / input3) * (input1 % input3);
	printf("%d", result);

	return 0;
}