/*
사용자로부터 두 개의 정수를 입력 받아 사칙 연산(더하기, 빼기, 곱하기, 나누기)의 결과를 출력해보자.
사용자 입력을 각각 4와 2를 입력하였을 때, 출력 결과의 형태는 다음과 같다.
출력 예)
			두 수의 합		: 6
			두 수의 차		: 2
			두 수의 곱		: 8
			두 수의 나누기	: 2
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int input1, input2;
	printf("두 수 입력: ");
	scanf("%d %d", &input1, &input2);
	printf("두 수의 합: %d\n", input1 + input2);
	printf("두 수의 차: %d\n", input1 - input2);
	printf("두 수의 곱: %d\n", input1 * input2);
	printf("두 수의 나누기: %d\n", input1 / input2);

	return 0;
}