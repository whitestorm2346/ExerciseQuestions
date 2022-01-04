#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int*, int*);
void setRandomNum(int[], int);
int getMax(int*, int);
void getMode(int*, int, int*, int*);

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

    int countSize = getMax(nums, size);
    int *count = (int*)malloc(sizeof(int) * (countSize + 1));

    getMode(nums, size, count, &countSize);

    int maxCount = getMax(count, countSize);

    printf("\nmode of this array: ");

    for(int i = 0; i < countSize; i++)
    {
        if(count[i] == maxCount) printf("%d ", i);
    }

    free(count);
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
int getMax(int *nums, int size)
{
    int max = INT_MIN;

    for(int i = 0; i < size; i++)
    {
        if(nums[i] > max) max = nums[i];
    }

    return max;
}
void getMode(int *nums, int size, int *count, int *max)
{
    for(int i = 0; i < *max; i++)
    {
        count[i] = 0;
    }

    for(int i = 0; i < size; i++)
    {
        count[nums[i]]++;
    }
}
