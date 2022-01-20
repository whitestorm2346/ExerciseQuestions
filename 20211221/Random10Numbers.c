#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int*, int*);
void Random10Numbers(int*, int);

int main()
{
    srand(time(NULL));

    int data[10];

    for(int i = 0; i < 4; i++)
    {
        Random10Numbers(data, 10);

        for(int j = 0; j < 10; j++)
        {
            printf("%d ", data[j]);
        }

        printf("\n");
    }

    return 0;
}

void swap(int *num1, int *num2)
{
    int temp = *num1;

    *num1 = *num2;
    *num2 = temp;
}
void Random10Numbers(int *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        arr[i] = i;
    }

    for(int i = 0; i < size - 1; i++)
    {
        swap(arr + i, arr + (rand() % (size - i) + i));
    }
}
