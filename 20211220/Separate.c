#include <stdio.h>

void Separate(int [], int, int [], int*, int [], int*);

int main()
{
    int nums[8];
    int odd[8], odd_size;
    int even[8], even_size;

    printf("Input:\n");

    for(int i = 0; i < 8; i++)
    {
        scanf("%d", &nums[i]);
    }

    Separate(nums, 8, odd, &odd_size, even, &even_size);

    printf("Output:\n");
    printf("Even: ");

    for(int i = 0; i < even_size; i++)
    {
        printf("%d ", even[i]);
    }

    printf("\nOdd: ");

    for(int i = 0; i < odd_size; i++)
    {
        printf("%d ", odd[i]);
    }

    return 0;
}

void Separate(int nums[], int nums_size,
             int odd[], int *odd_size,
             int even[], int *even_size)
{
    *odd_size = *even_size = 0;

    for(int i = 0; i < nums_size; i++)
    {
        if(nums[i] % 2) odd[(*odd_size)++] = nums[i];
        else even[(*even_size)++] = nums[i];
    }
}
