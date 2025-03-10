#include <stdio.h>

// *p 는 포인터 변수. 'p' 자체는 대상의 주소를 저장하고, '*p'는 역참조를 통해 대상에 할당된 값에 접근한다.
int main()
{
    int v = 100;

    int *p;

    p = &v;

    printf("%d, %p, %d, %p", v, p, *p, &v);

    return 0;
}