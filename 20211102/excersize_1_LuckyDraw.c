#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int int_TestCount;
    int intarr_Num[4] = {};

    printf("How many times you want to draw: ");
    scanf("%d", &int_TestCount);

    for(int i = 0; i < int_TestCount; i++)
    {
        switch(rand() % 1000 + 1)
        {
            case 1: intarr_Num[0]++; break;
            case 2 ... 11: intarr_Num[1]++; break;
            case 12 ... 61: intarr_Num[2]++; break;
            default: intarr_Num[3]++; break;
        }
    }

    printf("Legendary Equipment: %d\nProbability: %.2f%%\n\n",
           intarr_Num[0], (float)intarr_Num[0] / int_TestCount * 100);

    printf("Elite Equipment: %d\nProbability: %.2f%%\n\n",
           intarr_Num[1], (float)intarr_Num[1] / int_TestCount * 100);

    printf("Rare Equipment: %d\nProbability: %.2f%%\n\n",
           intarr_Num[2], (float)intarr_Num[2] / int_TestCount * 100);

    printf("Common Equipment: %d\nProbability: %.2f%%\n\n",
           intarr_Num[3], (float)intarr_Num[3] / int_TestCount * 100);

    return 0;
}
