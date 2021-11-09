#include <stdio.h>
#include <string.h>

int main()
{
    int int_TestCount;

    scanf("%d", &int_TestCount);

    for(int i = 1; i <= int_TestCount; i++)
    {
        int int_Size;

        printf("N = ");
        scanf("%d", &int_Size);

        int intarr_Num[int_Size * int_Size];

        for(int j = 0; j < int_Size * int_Size; j++)
        {
            scanf("%d", &intarr_Num[j]);
        }

        _Bool bl_IsSymmetric = 1;

        for(int int_LIdx = 0, int_RIdx = int_Size * int_Size - 1;
            int_LIdx < int_RIdx; int_LIdx++, int_RIdx--)
        {
            if(intarr_Num[int_LIdx] != intarr_Num[int_RIdx])
            {
                bl_IsSymmetric = 0;

                break;
            }
        }

        if(bl_IsSymmetric) printf("Test #%d: Symmetric.\n", i);
        else printf("Test #%d: Non-symmetric.\n", i);
    }

    return 0;
}
