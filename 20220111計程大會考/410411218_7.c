// ID:410411218 name:Yu,Tse-Hsun class:1A
#include <stdio.h>
#include <stdlib.h>

void DataAnalysis(int nums[], int size, int *max, int *sum)
{
    *sum = 0;
    *max = nums[0];

    for(int i = 0; i < size; i++)
    {
        *sum += nums[i];

        if(nums[i] > *max) *max = nums[i];
    }
}

int main()
{
    int size;

    scanf("%d", &size);

    int *nums = (int*)malloc(sizeof(int) * size);
    int max, sum;

    for(int i = 0; i < size; i++)
    {
        scanf("%d", &nums[i]);
    }

    DataAnalysis(nums, size, &max, &sum);

    printf("max.=%d,sum=%d", max, sum);

    free(nums);

    return 0;
}
