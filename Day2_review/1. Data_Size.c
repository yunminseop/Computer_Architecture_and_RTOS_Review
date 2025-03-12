#include <stdio.h>
#include <stdint.h>

// 1byte = 8bits = 2^8 states = 0~256
// Word = 16bits = 2^16 states = 0~65536
// Double Word = 32 bits = 2^32 states = ...

// 개발 환경에서 프로그램 짜기 전에 이 데이터 타입이 몇 메모리를 사용하는지 확인해보자.

// char = 1byte, short = 2byte, int = 4byte , long = 8byte
// long, short, int 는 양산 금지다!!!
// C99의 stdint.h와 같은 안전한 데이터 타입을 써야 함.(산업 표준)

// MSB, LSB = 왼쪽(큰 자릿수), 오른쪽(작은 자릿수)

// 음수를 표현 -> MSB를 부호비트로 사용.
// MSB = 1이면 음수, MSB = 0이면 양수

// 2의 보수를 사용

int main(){
    long num;
    printf("%zu\n", sizeof(num));
    
    int8_t num1 = 127;
    num1 ++;
    printf("%d", num1);
    
    return 0;
}