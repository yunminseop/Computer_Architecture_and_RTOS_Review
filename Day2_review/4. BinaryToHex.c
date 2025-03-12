#include <stdio.h>
// 2진수를 표현할 수 있는 방법은 없음.
// 따라서 1byte를 4bit x 2로 나눠서 4bit씩 16진수로 표현.
// 아래 예시 참고

int main(){
    char string[] = "01011111";

    printf("%s = ", string);
    printf("%s = ", "0x5F");
    printf("%d\n", 0x5F);
    
    printf("%d\n", 0b01011111);

    return 0;
}

