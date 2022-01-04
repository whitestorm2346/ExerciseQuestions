#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int*, int*);
void setRandomNum(int[], int);
void bubbleSort(int[], int);
float getMedian(int[], int);

int main()
{
    int size;

    printf("input a size of array: ");
    scanf("%d", &size);

    int *nums = (int*)malloc(sizeof(int) * size);

    setRandomNum(nums, size);

    printf("initial array: ");

    for(int i = 0; i < size; i++)
    {
        printf("%d ", nums[i]);
    }

    printf("\nsorted array: ");

    bubbleSort(nums, size);

    for(int i = 0; i < size; i++)
    {
        printf("%d ", nums[i]);
    }

    printf("\nmedian of this array: %.2f", getMedian(nums, size));

    free(nums);

    return 0;
}

void swap(int *num1, int *num2)
{
    int temp = *num1;

    *num1 = *num2;
    *num2 = temp;
}
void setRandomNum(int nums[], int size)
{
    srand(time(NULL));

    for(int i = 0; i < size; i++)
    {
        nums[i] = rand() % size;
    }
}
void bubbleSort(int nums[], int size)
{
    while(1)
    {
        _Bool isSorted = 1;

        for(int i = 0; i < size - 1; i++)
        {
            if(nums[i] > nums[i + 1])
            {
                isSorted = 0;

                swap(&nums[i], &nums[i + 1]);
            }
        }

        if(isSorted) break;
    }
}
float getMedian(int nums[], int size)
{
    if(size % 2) return (float)nums[size / 2];
    else return (nums[size / 2] + nums[size / 2 - 1]) / 2.f;
}
