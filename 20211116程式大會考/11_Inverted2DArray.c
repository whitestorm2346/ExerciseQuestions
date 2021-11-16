// ID:410411218 name:´åÌÊ³Ô class:1A
#include <stdio.h>

int main()
{
    int intarr_Num[4][4];

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            scanf("%d", &intarr_Num[i][j]);
        }
    }

    for(int i = 3; i >= 0; i--)
    {
        for(int j = 3; j >= 0; j--)
        {
            printf("%d ", intarr_Num[i][j]);
        }

        printf("\n");
    }

    return 0;
}
