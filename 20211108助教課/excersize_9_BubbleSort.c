#include <stdio.h>

int main()
{
    int intarr_Num[100];

    for(int i = 0; i < 100; i++)
    {
        scanf("%d", &intarr_Num[i]);
    }

    while(1)
    {
        _Bool bl_IsSorted = 1;

        for(int i = 0; i < 99; i++)
        {
            if(intarr_Num[i] > intarr_Num[i + 1])
            {
                int int_Temp = intarr_Num[i];

                intarr_Num[i] = intarr_Num[i + 1];
                intarr_Num[i + 1] = int_Temp;

                bl_IsSorted = 0;
            }
        }

        if(bl_IsSorted) break;
    }

    for(int i = 0; i < 100; i++)
    {
        printf("%d ", intarr_Num[i]);
    }

    return 0;
}
