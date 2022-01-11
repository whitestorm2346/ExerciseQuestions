// ID:410411218 name:Yu,Tse-Hsun class:1A
#include <stdio.h>

void swap(int *num1, int *num2)
{
    int temp = *num1;

    *num1 = *num2;
    *num2 = temp;
}
void Sorting(int arr[], int size)
{
    while(1)
    {
        _Bool isSorted = 1;

        for(int i = 0; i < size - 1; i++)
        {
            if(arr[i] > arr[i + 1])
            {
                swap(&arr[i], &arr[i + 1]);

                isSorted = 0;
            }
        }

        if(isSorted) break;
    }
}
int Median(int arr[], int size)
{
    return arr[size / 2];
}


int main()
{
    int nums[7];

    for(int i = 0; i < 7; i++)
    {
        scanf("%d", &nums[i]);
    }

    Sorting(nums, 7);

    printf("±Æ§Ç«á:");

    for(int i = 0; i < 7; i++)
    {
        printf("%d ", nums[i]);
    }

    printf("\nmedian value=%d", Median(nums, 7));

    return 0;
}
