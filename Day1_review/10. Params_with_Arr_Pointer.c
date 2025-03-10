#include <stdio.h>

// 배열 변수는 int * 형이기 때문에 함수 매개변수가 배열 변수여도, 포인터 변수여도 똑.같.이. 동작한다.
// 포인터 매개변수로 받아서 배열처럼 사용해도 동작한다! 그 반대도 마찬가지.
void show1(int arr[], int size);
void show2(int *arr, int size);


int main()
{
    int arr[3] = {1, 2, 3};

    printf("배열 매개변수에 넘겨줬을 때, ");
    show1(arr, 3);
    printf("\n");
    printf("포인터 변수에 넘겨줬을 때, ");
    show2(arr, 3);

    return 0;
}


void show1(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    for (int i = 0; i < size ; i ++)
    {
        printf("%d ", *(arr+i));
    }
}



void show2(int *arr, int size)
{
    for (int i = 0 ; i < size ; i ++)
    {
        printf("%d ", *(arr+i));
    }

    for (int i = 0; i < size ; i ++)
    {
        printf("%d ", arr[i]);
    }
}