#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() 
{
	// 사칙 연산을 수행하는 계산기 프로그램을 작성하세요
	// 두개의 정수와 연산자를 입력받아서 해당 연산자에 대한 연산을 수행하고
	// 결과를 출력하는 프로그램을 작성하세요
	// x를 누르면 프로그램을 종료하도록 하세요

	// 출력형식)
	/*
	첫번째 정수를 입력하세요 : 5
	다음 연산자 중 하나를 입력하세요 , x입력시 종료(+, -, *, /) : *
	두번째 정수를 입력하세요 : 3

	5 * 3 = 15

	첫번째 정수를 입력하세요 : 5
	다음 연산자 중 하나를 입력하세요, x입력시 종료(+, -, *, /) : /
	두번째 정수를 입력하세요 : 3

	5 / 3 = 1

	첫번째 정수를 입력하세요 : 5
	다음 연산자 중 하나를 입력하세요, x입력시 종료(+, -, *, /) : x
	두번째 정수를 입력하세요 : 3

	프로그램이 종료되었습니다.

	*/


	int n1, n2;
	char n;
	char s;
	int total;

	do
	{
		printf("첫번째 정수를 입력하세요 : ");
		scanf("%d", &n1);

		scanf("%c", &s);

		printf("다음 연산자 중 하나를 입력하세요, x입력시 종료(+, -, *, /) : ");
		scanf("%c", &n);

		scanf("%c", &s);

		printf("두번째 정수를 입력하세요 : ");
		scanf("%d", &n2);
		
		switch (n)

		{
		case '+':
			total = n1 + n2;
			printf("%d + %d = %d\n", n1, n2, total);
			break;
		case '-':
			total = n1 - n2;
			printf("%d - %d = %d\n", n1, n2, total);
			break;
		case '*':
			total = n1 * n2;
			printf("%d * %d = %d\n", n1, n2, total);
			break;
		case '/':
			total = n1 / n2;
			printf("%d / %d = %d\n", n1, n2, total);
			break;
		case 'x':
			break;
		default:
			printf("\n잘못 입력했습니다. 다시 입력해주세요...\n");
			break;
		}
		
		
	} while (n != 'x');

	printf("프로그램이 종료되었습니다!!!\n");
	return 0;
}