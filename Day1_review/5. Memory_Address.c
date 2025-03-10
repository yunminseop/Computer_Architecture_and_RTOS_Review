#include <stdio.h>

// 메모리 주소에 대해 알아보자.
// 내가 선언한 지역 변수, 전역 변수, 심지어 함수도 컴퓨터 메모리 공간 어딘가에 저장된다.

double num = 5.0;

void check(char a);

int main(){

    char C = 'Y';

    check(C);

    printf("%p %p %p %p\n", &num, &check, &main, &C);
    // %p 는 pointer을 나타낸다. 주소값을 칭하는 형식 지정자이다.

    return 0;
}


void check(char a)
{
    return;
}