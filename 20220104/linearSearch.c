#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int*, int*);
void setRandomNum_NoSameNum(int[], int);
int linearSearch(int[], int, int);

int main()
{
    int size, num, index;

    printf("input a size of array: ");
    scanf("%d", &size);
    printf("input an integer you want to search: ");
    scanf("%d", &num);

    int *nums = (int*)malloc(sizeof(int) * size);

    setRandomNum_NoSameNum(nums, size);

    printf("initial array: ");

    for(int i = 0; i < size; i++)
    {
        printf("%d ", nums[i]);
    }

    printf("\n");

    index = linearSearch(nums, size, num);

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
void setRandomNum_NoSameNum(int nums[], int size)
{
    srand(time(NULL));

    for(int i = 0; i < size; i++)
    {
        nums[i] = i;
    }

    for(int i = 0; i < size - 1; i++)
    {
        swap(&nums[i], &nums[rand() % size]);
    }
}
int linearSearch(int nums[], int size, int num)
{
    for(int i = 0; i < size; i++)
    {
        if(nums[i] == num) return i;
    }

    return -1;
}
