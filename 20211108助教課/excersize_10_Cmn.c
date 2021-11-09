#include <stdio.h>

void BubbleSort(int* intarr_Num, int int_Size);
void printNum(int *array, int size, int gets, int *arr_2, int Gets);

int main()
{
    int intarr_Num[8], intarr_Temp[8];

    for(int i = 0; i < 8; i++)
    {
        scanf("%d", &intarr_Num[i]);
    }

    BubbleSort(intarr_Num, 8);

    printNum(intarr_Num, 8, 6, intarr_Temp, 6);

    return 0;
}

void printNum(int *arr_1, int size, int gets, int *arr_2, int Gets)
{
    for(int i = size; i >= gets; i--)
    {
        arr_2[gets - 1] = i - 1;

        if(gets > 1) printNum(arr_1, size - 1, gets - 1, arr_2, Gets);
        else
        {
            for(int j = Gets - 1; j >= 0; j--)
            {
                printf("%d ", arr_1[arr_2[j]]);
            }

            printf("\n");
        }
    }
}

void BubbleSort(int* intarr_Num, int int_Size)
{
    while(1)
    {
        _Bool bl_IsSorted = 1;

        for(int i = 0; i < int_Size - 1; i++)
        {
            if(intarr_Num[i] < intarr_Num[i + 1])
            {
                int int_Temp = intarr_Num[i];

                intarr_Num[i] = intarr_Num[i + 1];
                intarr_Num[i + 1] = int_Temp;

                bl_IsSorted = 0;
            }
        }

        if(bl_IsSorted) break;
    }
}
