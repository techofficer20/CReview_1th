/*
사용자로부터 두 개의 정수를 입력 받아 나누었을 때 발생하는 몫과 나머지를 출력하는 프로그램을 작성해보자.
(참고. 나머지를 구하는 연산자는 % 이다.)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int input1, input2;
	printf("두 수 입력: ");
	scanf("%d %d", &input1, &input2);

	printf("몫: %d, 나머지: %d\n", input1 / input2, input1 % input2);

	return 0;
}