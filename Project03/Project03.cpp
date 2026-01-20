#define _CRT_SECURE_NO_WARNINGS
// 위에 내용을 정의하면 _s  시리즈 함수를 사용해도 에러가 발생하지 않음
#include <stdio.h>

int main()
{
    // 기본 입력문
    short n;
    scanf("%hd", &n);

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
*/