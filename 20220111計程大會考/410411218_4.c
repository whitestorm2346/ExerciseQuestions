// ID:410411218 name:Yu,Tse-Hsun class:1A
#include <stdio.h>
#include <stdlib.h>

int Polynomial(int arr[], int size, int x)
{
    int sum = 0;

    for(int i = 0, base = 1; i < size; i++, base *= x)
    {
        sum += arr[i] * base;
    }

    return sum;
}

int main()
{
    int size;

    scanf("%d", &size);

    int *arr = (int*)malloc(sizeof(int) * size);

    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int x;

    scanf("%d", &x);

    printf("%d", Polynomial(arr, size, x));

    free(arr);

    return 0;
}
