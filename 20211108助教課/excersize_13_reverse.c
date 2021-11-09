#include <stdio.h>

int main()
{
    int int_Size = 0;

    scanf("%d", &int_Size);

    int intarr_Num[int_Size];

    for(int i = 0; i < int_Size; i++)
    {
        scanf("%d", &intarr_Num[i]);
    }

    for(int i = int_Size - 1; i >= 0; i--)
    {
        printf("%d ", intarr_Num[i]);
    }

    return 0;
}
