#include <stdio.h>

// 고차원 배열의 경우 인덱싱을 어떻게 할 것인가?

int main(){

    double Marr[2][4] = {{1., 2., 3., 4.}, {5., 6., 7., 8.}};

    int row_len = sizeof(Marr) / sizeof(Marr[0]); // 행 사이즈 구하기
    int col_len = sizeof(Marr[0]) / sizeof(Marr[0][0]); // 열 사이즈 구하기
    
    printf("행 크기: %d\n", row_len);
    printf("열 크기: %d\n", col_len);


    for (int i = 0 ; i < row_len; i ++)
    {
        for (int j = 0 ; j < col_len ; j ++)
        {
            printf("%lf ", Marr[i][j]);
        }
        printf("\n");
    }

    // A[i][j] 배열은 메모리 상에 어떻게 저장되는가?

    // sizeof(A[0]) * i + sizeof(A[0][0]) * j 에 저장된다.
    // 한 번 확인해보자.
    for (int i = 0; i < row_len ; i ++)
    {
        for (int j = 0; j < col_len; j ++)
        {
            printf("A[%d][%d]는 %ld에 저장됩니다.\n", i, j, sizeof(Marr[0]) * i + sizeof(Marr[0][0]) * j);
            // Marr[0]은 {1., 2., 3., 4.}이므로 8*4 = 32, Marr[0][0]은 {1.}이므로 8.
        }
        
    }

    return 0;
}
