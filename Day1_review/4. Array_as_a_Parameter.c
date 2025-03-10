#include <stdio.h>

// 1. 일반 변수와 배열 변수의 차이점을 알아보자

// 일반 변수는 함수에 복사본을 넘겨준다. void 반환형 함수에서만 사용되고 버려진다.
// 배열은 함수의 인자로 원본을 넘겨준다. void 반환형 함수에서 실행되도 원본에 수정사항이 생긴다.

// 2. 배열 인덱스를 지정하지 말고 size를 함께 넘겨주자. 그래야 flexible한 배열 함수가 될 것이다.

void change_arr(int arr[], int size);
void change_int(int num);

int main(){
    int num = 5;
    int arr1[3] = {1, 2, 3};

    int len = sizeof(arr1)/ sizeof(arr1[0]);

    change_arr(arr1, len);
    change_int(num);

    printf("배열 수정 결과: ");
    for (int i = 0; i < len ; i ++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\n정수 수정 결과: %d\n", num);

    
    return 0;
}

void change_arr(int arr[], int size)
{
    for (int i = 0 ; i < size ; i ++)
    {
        arr[i] *= 2;
    }
}

void change_int(int num)
{
    num *= 2;
}