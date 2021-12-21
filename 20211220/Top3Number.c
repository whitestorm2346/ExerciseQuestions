#include <stdio.h>

void swap(int*, int*);
void Top3Number(int [], int, int*, int*, int*);

int main()
{
    int nums[8];
    int first, second, third;

    printf("Input:\n");

    for(int i = 0; i < 8; i++)
    {
        scanf("%d", &nums[i]);
    }

    Top3Number(nums, 8, &first, &second, &third);

    printf("Output:\n");
    printf("1st: %d\n", first);
    printf("2nd: %d\n", second);
    printf("3rd: %d\n", third);

    return 0;
}

void swap(int *num1, int *num2)
{
    int temp = *num1;

    *num1 = *num2;
    *num2 = temp;
}
void Top3Number(int nums[], int size, int* first, int* second, int* third)
{
    int max[3];

    for(int i = 0; i < size; i++)
    {
        int temp1 = nums[i], temp2;

        if(temp1 > *first)
        {
            temp2 = *first;
            *first = temp1;
            temp1 = temp2;
        }

        if(temp1 > *second)
        {
            temp2 = *second;
            *second = temp1;
            temp1 = temp2;
        }

        if(temp1 > *third)
        {
            temp2 = *third;
            *third = temp1;
            temp1 = temp2;
        }
    }
}
