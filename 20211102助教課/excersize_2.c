#include <stdio.h>

int main()
{
    int a[5][4] = {
        {12, 45, 65, 88},
        {58, 62, 77, 98},
        {78, 89, 63, 15},
        {97, 32, 28, 73},
        {67, 94, 35, 64}
    };

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            printf("a[%d][%d]=%d ", i, j, a[i][j]);
        }

        printf("\n");
    }

    return 0;
}
