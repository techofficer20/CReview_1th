#include <stdio.h>

int main(void)
{
	int a = 10;
	int b = 11;
	int c = 12;
	int d = 10;

	printf("!(a == 10) 의 결과는 : %d\n", !(a == 10)); // 값 반대
	printf("(a < b) && (a < c) 의 결과는 : %d\n", (a < b) && (a < c)); // 모두 true면 true
	printf("(a >= c) || (a == d) 의 결과는 : %d\n", (a >= c) || (a == d)); // 하나 이상 true면 true

	return 0;
}