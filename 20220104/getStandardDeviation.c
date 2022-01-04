#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void swap(int*, int*);
void setRandomNum(int[], int);
double getAverage(int[], int);
double getStandardDeviation(int[], int, double);

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

    double average = getAverage(nums, size);

    printf("\nThe standard deviation of this array: %f",
           getStandardDeviation(nums, size, average));

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
double getAverage(int nums[], int size)
{
    int sum = 0;

    for(int i = 0; i < size; i++)
    {
        sum += nums[i];
    }

    return (double)sum / size;
}
double getStandardDeviation(int nums[], int size, double average)
{
    double sum = 0;

    for(int i = 0; i < size; i++)
    {
        sum += (nums[i] - average) * (nums[i] - average);
    }

    return sqrt(sum / size);
}
