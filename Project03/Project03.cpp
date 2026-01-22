#define _CRT_SECURE_NO_WARNINGS
// 위에 내용을 정의하면 _s  시리즈 함수를 사용해도 에러가 발생하지 않음
#include <stdio.h>

int main()
{
    // clang, gcc, g++
    //
    // c-compiler : msvc, 표준+a


    // 기본 입력문
    short n;
    char ch;

    printf("정수를 입력하세요: ");
    scanf("%hd", &n);
    printf("%s\n", n % 2 ? "홀수" : "짝수");

    scanf("%c", &ch);//  입력버퍼 낭비시키기

    // 표준 입력 장치로부터 입력을 받아 변수 n에 저장
    printf("문자를 입력하세요: ");
    // scanf("%c", &ch);// & 엠퍼센드, | 파이프라인
    scanf("%c", &ch);
    printf("입력된 문자: %c\n", ch);
    printf("ch에 저장된 값: %hhd\n", ch);


    
    // error의 종류 : 컴파일에러(문법 에러), 런타임 에러, 논리적인 에러
    return 0;
}


/*
git: 코드(문서) 버전관리 툴(소프트웨어)
local respository

remote repository
github

github.com/new

git init

git config --global user.name "seanlee.kr99"
git config --global user.email "seanlee.kr99@gmail.com"

git remote add origin https://github.com/seanlee99/sbsc.git

git push -u origin main --force

git remove -v

git add .

git commit -m "first commit"


*/