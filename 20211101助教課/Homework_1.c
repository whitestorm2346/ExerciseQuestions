#include <stdio.h>

int main()
{
    int intarr_Score[10];
    int int_Sum = 0;

    printf("Input the score:\n");

    for(int i = 0; i < 10; i++)
    {
        printf("No.%d -> ", i + 1);
        scanf("%d", &intarr_Score[i]);

        int_Sum += intarr_Score[i];
    }

    printf("\nAverage = %.2f", (float)int_Sum / 10);

    return 0;
}
