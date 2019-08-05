/*
우리가 배운 서식 문자열을 이용하여 다음과 같은 출력 결과를 보일 수 있도록 프로그램을 작성해보도록 하자.
이름: 이창현
나이: 18세
성적: A
단, 나이의 숫자와 성적의 문자는 서식 문자열에 직접 쓰지 말고, 서식 문자 %d, 서식 문자 %c를 각각 사용하여 출력하도록 하자.
*/

#include <stdio.h>
int main(void)
{
	int age = 20;
	char grade = 'A';

	printf("이름: 최현준\n");
	printf("나이: %d세\n", age);
	printf("성적: %c", grade);

	return 0;
}