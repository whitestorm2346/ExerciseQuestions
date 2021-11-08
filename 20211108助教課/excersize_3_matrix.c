#include <stdio.h>

int main()
{
    int intarr_1[2][3];
    int intarr_2[3][2];
    int intarr_Result[2][2];

    printf("m1(under):\n");

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%d", &intarr_1[i][j]);
        }
    }

    printf("m2(under):\n");

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            scanf("%d", &intarr_2[i][j]);
        }
    }

    intarr_Result[0][0] = intarr_1[0][0] * intarr_2[0][0] +
                          intarr_1[0][1] * intarr_2[1][0] +
                          intarr_1[0][2] * intarr_2[2][0];

    intarr_Result[1][0] = intarr_1[1][0] * intarr_2[0][0] +
                          intarr_1[1][1] * intarr_2[1][0] +
                          intarr_1[1][2] * intarr_2[2][0];

    intarr_Result[0][1] = intarr_1[0][0] * intarr_2[0][1] +
                          intarr_1[0][1] * intarr_2[1][1] +
                          intarr_1[0][2] * intarr_2[2][1];

    intarr_Result[1][1] = intarr_1[1][0] * intarr_2[0][1] +
                          intarr_1[1][1] * intarr_2[1][1] +
                          intarr_1[1][2] * intarr_2[2][1];

    printf("m3=m2*m1(under):\n");

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("%d ", intarr_Result[i][j]);
        }

        printf("\n");
    }

    return 0;
}
