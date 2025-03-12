#include <stdio.h>

int main(){
    unsigned int a = 176;
    unsigned char b = 0b01011111;
    unsigned char c = 0x5F;
    char num = 127;

    printf("%d\n", num); // %c로 출력하면 ASCII 코드에서 127번 기호(Del)를 찾아 출력하려고 하기 때문에 에러 발생.
    printf("%02x\n", ((unsigned char *)&a)[1]);
    printf("%d\n", b);
    printf("%d\n", c);

    printf("%02x %02x %02x %02x\n",
        ((unsigned char *)&a)[0],
        ((unsigned char *)&a)[1],
        ((unsigned char *)&a)[2],
        ((unsigned char *)&a)[3]);

    return 0;
}