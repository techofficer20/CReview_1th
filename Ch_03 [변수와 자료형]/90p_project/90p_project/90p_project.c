#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int input1, input2;
	int total;

	printf("첫 번째 정수를 입력하세요: ");
	scanf("%d", &input1);
	printf("두 번째 정수를 입력하세요: ");
	scanf("%d", &input2);
	total = input1 + input2;

	printf("두 수의 합은 %d 이다.\n", total);

	return 0;

	// float는 scanf, printf 모두 %f
	// double은 scanf는 %lf, printf는 %f
	// %.alf는 소수점 a+1째에서 반올림, a째 자리까지 출력
}