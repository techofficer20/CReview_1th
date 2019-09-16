/*
사용자로부터 세 개의 정수를 입력 받아서 차례로 곱하기, 더하기 연산을 순서대로 수행하여 그 결과를 출력해보자. 출력 결과는 다음과 같다.
출력 예)
				2 * 3 + 4 = 10
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int input1, input2, input3;

	printf("정수 입력:");
	scanf("%d %d %d", &input1, &input2, &input3);
	printf("%d * %d + %d = %d", input1, input2, input3, input1 * input2 + input3);

	return 0;
}