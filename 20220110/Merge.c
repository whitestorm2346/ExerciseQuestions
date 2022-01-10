#include <stdio.h>

void Merge(int[], int, int[], int, int[], int);

int main()
{
    int arr1[5];
    int arr2[5];
    int result_arr[10];

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr2[i]);
    }

    Merge(arr1, 5, arr2, 5, result_arr, 10);

    for(int i = 0; i < 10; i++)
    {
        printf("%d ", result_arr[i]);
    }

    return 0;
}

void Merge(int arr1[], int size1, int arr2[], int size2, int result[], int size3)
{
    int i = 0, j = 0, k = 0;

    for(; i < size1 && j < size2; k++)
    {
        if(arr1[i] > arr2[j]) result[k] = arr2[j++];
        else result[k] = arr1[i++];
    }

    while(i < size1)
    {
        result[k++] = arr1[i++];
    }

    while(j < size2)
    {
        result[k++] = arr2[j++];
    }
}
