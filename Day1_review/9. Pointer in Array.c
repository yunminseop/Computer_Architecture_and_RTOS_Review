#include <stdio.h>
// 배열의 포인터 성질

int main()
{
    int A[4] = {1, 3, 5, 7};

    printf("%d, %d\n", A[2], *(A+2));
    // A[2] = *(A+2)

    printf("%p, %p\n", A+1, &A[1]);
    // A+1 = &A[1]

    return 0;
}