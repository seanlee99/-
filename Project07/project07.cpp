#include <stdio.h>

// 콘솔 입출력 함수가 정의된 헤더 파일
// 윈도우즈 OS에서만 사용 가능
#include <conio.h>


int main()
{
	// while 반복문 : 조건식의 결과가 참인동안 반복실행된다!!
	// 조건식의 결과에 따라 한번 반복실행되지 않을 수 있다
	// 
	// 

	int i = 0;
	while (i < 5)
	{
		printf("i = %d\n", i + 1);
		i++;
	}

	i = 0; // i를 다시 0으로 초기화
	while (i++ < 15) printf("=");

	i = 1;
	int total = 0; // total이라는 변수를 선언하고 0으로 초기화
	// 0 + 1 + 2 + 3 + 4 + 5 +.....+ 10 = 55
	while (i <= 10)
	{
		total += i;
		i++;
	}
	printf("total = %d", total);

	i = 0;
	while (i++ < 15) printf("=");

	//0부터 10까지의 짝수들의 합을 구하세요

	printf("\n");
	i = 0;
	total = 0;
	while (i <= 10 )
	{
		total += i;
		i += 2;
	}
	printf("%d\n", total);


	i = 0;
	while (i++ < 15) printf("=");

	printf("\n");

	// 구구단 출력하기
	i = 1;
	while (i < 10)
	{
		printf("2 x %d = %d\n", i, i * 2);
		i++;
	}

	//
	int ch = 0;
	while (ch != 'x')
	{
		printf("종료하려면 아무키나 입력하세요: ");
		ch = _getch(); // conio.h이 포함되어 있어야 한다.
		printf("%c\n", ch); // 입력한 값 확인 가능
	}

	// 1부터 100까지의 합을 구하세요
	i = 1;
	total = 0;
	while (1)
	{
		total += i;
		i++;
		if (i > 100) // i가 100보다 크다면...

			break; // 반복문을 즉시 탈출시킴
	}
	printf("total = %d\n", total);

	// 반복문 중첩시키기
	int dan = 2;
	i = 1;
	while (dan <= 9)
	{
		printf("--- %d단 ---\n", dan);
		i = 1;
		while (i < 10)
		{
			printf("%d x %d = %d\n", dan, i, dan * i);
			i++;
		}
		dan++;
	}


	i = 1;
	while (i < 10)
	{
		dan = 2;
		while (dan < 10)
		{
			int result = dan * i;
			printf("%d x %d = %d\t", dan, i, result);
			dan += 1;
		}
		printf("\n");
		i += 1;
	}


	// 1 ~ 99까지 테이블 모양으로 출력하기

	i = 1;
	while (i < 100)
	{
		printf("%d\t", i);
		if (i % 10 == 0)
		{
			printf("\n");
		}
		i++;
	}






	return 0;
}