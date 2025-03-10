#include <stdio.h>

// 가장 헷갈릴 부분. 포인터 연산.
int main()
{
    int v = 100;

    int *p; // p는 포인터 변수
    p = &v; // p에는 v의 주소가 저장된다.

    int *q = p + 1; // v의 주소 + 1이 q에 할당된다. 그럼 sizeof(int)만큼 늘어난 메모리 주소를 q가 가리키겠지?

    printf("%p, %p\n", p, q); // 맞았다.

    // 내 가설을 확인하기 위해 자료형을 바꿔서 검증.

    double n = 5.5;

    double *t = &n;

    double *u = t + 1;

    printf("%p, %p\n", t, u); // 가설 검증(sizeof(double)==8)

    return 0;
}