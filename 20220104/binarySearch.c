#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int*, int*);
void setRandomNum(int[], int);
void bubbleSort(int[], int);
int binarySearch(int[], int, int);

int main()
{
    int size, num, index;

    printf("input a size of array: ");
    scanf("%d", &size);
    printf("input an integer you want to search: ");
    scanf("%d", &num);

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

    printf("\n");

    index = binarySearch(nums, size, num);

    if(index == -1) printf("%d is not in the array", num);
    else printf("%d is array[%d]", num, index);

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
int binarySearch(int sorted_nums[], int size, int num)
{
    int left = 0, right = size - 1;

    while(left < right)
    {
        int middle = (left + right) / 2;

        if(num < sorted_nums[middle]) right = middle - 1;
        else if(num > sorted_nums[middle]) left = middle + 1;
        else return middle;
    }

    return -1;
}
