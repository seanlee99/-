#include <stdio.h>

// Data Type
// 정수 : 음수, 0, 양수
// char(1byte), short(2byte), int(4byte), long(win:4, mac:8)
// 
// 실수 : 소수점을 포함하는 숫자
//float(4byte), double(8byte), long double(win, mac)

int main()
{
    // 정수형
    char n; // 2^8개의 서로 다른 데이터를 표현(저장)할 수 있음
    short num; // 2^16개의 서로 다른 데이터를 표현(저장)할 수 있음
    int score; // 2^32개의 서로 다른 데이터를 표현(저장)할 수 있음
    long money; // 2^32개의 서로 다른 데이터를 표현(저장)할 수 있음
    long long big_number; // 2^64개의 서로 다른 데이터를 표현(저장)할 수 있음

    // sizeof 연산자(operator) : 타입 또는 변수의 크기를 바이트 단위로 나타냄
    printf("n의 크기: %d\n", sizeof(n));
    printf("num의 크기: %d\n", sizeof(short));
    printf("score의 크기: %d\n", sizeof(int));
    printf("money의 크기: %d\n", sizeof(long));
    printf("big_number의 크기: %d\n", sizeof(long long));
    printf("double의 크기: %d\n", sizeof(double));

    n = 127;
    printf("n의 값: %d\n", n);
    n = 128;
    printf("n의 값: %d\n", n);
    n = 100;
    printf("n의 값: %f\n", n);
    printf("n의 값: %x\n", n);
    printf("n의 값: %o\n", n);

    double d = 100.0;
    printf("d의 값: %f\n", d);
    printf("d의 값: %e\n", d);



    // 형식 문자(Formatted String)
    // %d : 값을 정수형으로 표현
    // %u : 값을 양의 정수형으로 표현
    // %f : 값을 실수형으로 표현
    // %x : 값을 16진수로 표현
    // %o : 값을 8진수로 표현
    // %e : 값을 지수형으로 표현
    // %c : 값을 문자로 표현

    n = 'A';
    printf("n을 문자로 표현: %c\n", n);

    // 10
    printf("숫자의 출력: %5d\n", 10); //정수를 출력할때 자릿수 5칸을 확보한 뒤 오른쪽 정렬하여 출력
    printf("숫자의 출력: %-5d\n", 10); // 정수를 출력할때 자릿수 칸을 확보한 뒤 왼쪽 정렬하여 출력

    printf("실수의 출력: %6.2\nf", 180.78); // 소수점 포함하여 6자리를 확보한 뒤 소수점 이하를 두잘까지만 표현
    // 123791293.434
    printf("실수의 출력: %.2f\n", 4237423789.789999);



    n = 10;
    big_number = 123456789;
    score = 12345;
    num = 3;
    money = 12345678;


    // 기본 : %d는 int 크기에 기본적으로 맞춰져 있음
    printf("%d\n", score);

    printf("%hd\n", num); // short형 출력

    printf("%hhd\n", n); // char형 출력

    printf("%ld\n", money); // long형 출력

    printf("%lld\n", big_number); // long long형 출력

    unsigned char age; // 0 ~ 255까지 표현(저장) 가능
    age = 80;
    printf("%hhu\n", score);

    unsigned long lsize = 987654321;
    printf("%lu\n", lsize);

    printf("%llu\n", sizeof(long long));

    /*
    %d 와 %u의 세분화
    %hhd(u), %hd(u), %d(u), %ld(u), %lld(u)
    */



    return 0;
}