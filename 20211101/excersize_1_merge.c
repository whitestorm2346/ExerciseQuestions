#include <stdio.h>

int main()
{
    int intarr_1[5] = {5, 10, 15, 20, 25};
    int intarr_2[5] = {3, 4, 11, 12, 16};
    int intarr_Result[10];
    int i = 0, j = 0, k = 0;

    for(; i < 5 && j < 5;)
    {
        if(intarr_1[i] < intarr_2[j]) intarr_Result[k++] = intarr_1[i++];
        else intarr_Result[k++] = intarr_2[j++];
    }

    for(; k < 10; k++)
    {
        if(i >= 5) intarr_Result[k] = intarr_2[j++];

        if(j >= 5) intarr_Result[k] = intarr_1[i++];
    }

    for(i = 0; i < 10; i++)
    {
        printf("%d ", intarr_Result[i]);
    }

    return 0;
}
