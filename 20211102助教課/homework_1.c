#include <stdio.h>

int main()
{
    int intarr_A[3][4] = {
        {18, 44, 21, 25},
        {21, 19, 65, 41},
        {78, 21, 33, 54}
    };
    int intarr_B[3][4] = {
        {65, 32, 45, 74},
        {11, 24, 10, 41},
        {12, 45, 18, 11}
    };
    int intarr_C[3][4];

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            intarr_C[i][j] = intarr_A[i][j] + intarr_B[i][j];

            printf("c[%d][%d]=%d ", i, j, intarr_C[i][j]);
        }

        printf("\n");
    }

    return 0;
}
