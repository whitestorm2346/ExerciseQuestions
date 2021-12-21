#include <stdio.h>

int RemoveDuplicate(int [], int);

int main()
{
    int num[8];
    int result_size;

    printf("Input:\n");

    for(int i = 0; i < 8; i++)
    {
        scanf("%d", &num[i]);
    }

    result_size = RemoveDuplicate(num, sizeof(num) / sizeof(int));

    printf("Output:\n");

    for(int i = 0; i < result_size; i++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}

int RemoveDuplicate(int number[], int size)
{
    int temp[8] = {};
    int count = 0;

    for(int i = 0; i < size; i++)
    {
        _Bool isExist = 0;

        for(int j = 0; j < count; j++)
        {
            if(temp[j] == number[i])
            {
                isExist = 1;
                break;
            }
        }

        if(!isExist) temp[count++] = number[i];
    }

    for(int i = 0; i < size; i++)
    {
        number[i] = (i < count) ? (temp[i]) : 0;
    }

    return count;
}
