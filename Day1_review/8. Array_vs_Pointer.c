#include <stdio.h>

int main()
{
    int A[3] = {1, 2, 3};
    int *p;

    p = A;

    printf("%p, %p, %p\n", A, &A[0], p); // 주소 출력
    // 결과를 보면 알 수 있듯이, A와 &A[0]는 같은 주소를 출력한다.

    printf("%d, %d, %d, %d\n", *(A+2), A[2], p[2], *(p+2));
    // A를 역참조하는 것과 인덱스로 접근하는 것, 포인터 변수로 접근하는 것 모두 동일한 결과를 출력한다.
    // 이 둘이 모두 'int *' 형이기 때문이다.

    // 단, p는 포인터 '변수'이므로 프로그램이 실행되는 도중 변할 여지가 있고,
    // A는 배열의 첫 번째 원소의 주소를 가리키는 '상수'이므로 변수로써 사용할 수 없다.
    // 한 마디로, p = A가 가능하지만, A = p는 안 된다.

    return 0;
}