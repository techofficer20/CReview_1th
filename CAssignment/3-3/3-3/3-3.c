/*
사용자로부터 알파벳 문자 하나를 입력 받는다. 그리고 이에 해당하는 숫자를 출력하라. 예를 들어,
'A'를 입력하면 출력 결과는 65가 되어야 한다. (참고, 문자 입력 서식은 %c 를 사용하면 된다.)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char a;
	printf("문자 입력: ");
	scanf("%c", &a);
	printf("출력 결과: %d", a);

	return 0;
}