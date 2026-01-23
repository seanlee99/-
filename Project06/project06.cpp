#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	// 조건식???
	// 비교연산자 또는 논리연산자
	// 0 : 거짓, 1 : 참
	/*
	if (조건식) {
		조건식이 참일때 실행될 명령문(들)
		} else if (조건식2) {
		조건식이 참일때 실행될 명령문(들)
		} else if (조건식3) {
		조건식이 참일때 실행될 명령문(들)
		} else if (조건식n) {
		조건식이 참일때 실행될 명령문(들)
		} else {
		위 모든 조건식들이 거짓일때 실행될 명령문(들)
	}
	*/
	/*
	int num;
	 printf("정수를 입력하세요 >>> ");
	 scanf("%d", &num);

	 if (num%2) {
		printf("홀수\n");
	}
	else {
		printf("짝수\n");
	}

	 int n1, n2;
	 두개를 입력받아서 더 큰수를 출력하세요
	 printf("정수 2개를 입력하세요 >>> ");
	 scanf("%d %d", &n1, &n2);

	if (n1 > n2) {
		printf("%d", n1);
	} else if (n1 < n2) {
		printf("%d", n2);
	} else {
		printf("두 수가 같습니다.");
	}

	int x, y, res;
	 printf("정수 2개를 입력하세요 >>> ");
	 scanf("%d %d", &x, &y);
	if (x > 0 && y > 0) res = 1;
	else if (x > 0 && y < 0) res = 4;
	else if (x < 0 && y > 0) res = 2;
	else res = 3;

	printf("%d사분면", res);
	*/


	// 초(second)를 입력받습니다.
	// 입력받은 초를 계산하여 다음과 같이 출력하세요.
	// 초(second)를 입력하세요 >>> 3650
	// 3650초는 hh 시간 mm분 ss초 입니다.


	int second, hh, mm, ss;
	printf("초(second)를 입력하세요 >>> ");
	scanf("%d", &second);
	mm = second / 60;
	hh = mm / 60;
	ss = second % 60;
	mm %= 60;

	printf("%d초는 %d시간 %d분 %d초 입니다", second, hh, mm, ss);

	return 0;
}