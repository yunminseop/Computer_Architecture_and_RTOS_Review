#include <stdio.h>

// 배열의 선언 방법 세 가지

int main(){

    int A[5] = {1, 2.7, 3, 4, 5}; // 배열 크기와 원소를 모두 초기화
    int B[5] = {1, 2}; // 배열 크기와 맞지 않게 원소를 할당할 시 잔여 인덱스는 zeros
    int C[] = {1, 2, 3}; // 배열 크기를 선언하지 않으면 컴파일러가 배열 크기 계산

    double D[3] = {1.0, 2.0, 7};

    int len1 = sizeof(A)/ sizeof(A[0]);
    int len2 = sizeof(D)/ sizeof(D[0]); // 배열의 사이즈를 구하는 방법: 전체 크기 / 첫 번째 원소의 크기

    for (int i = 0; i < len1; i ++)
    {
        printf("%d\n", A[i]);
    }
    for(int i = 0; i < len2 ; i ++)
    {
        printf("%lf\n", D[i]); // 인덱싱으로 출력
    }

    printf("%p\n", A); 
    printf("%d\n", *A); // 배열 변수 A에는 '첫 번째 원소의 주소'를 저장한 주소값이 할당되어있다.
                        // 포인터와 동일한 개념임. *로 배열 원소에 직접 접근할 수 있다.
    
}