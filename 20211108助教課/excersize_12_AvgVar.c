#include <stdio.h>

int main()
{
    int intarr_Num[100];
    int int_Sum = 0, int_Sum_2 = 0;
    float flt_Avg, flt_Var;

    for(int i = 0; i < 100; i++)
    {
        scanf("%d", &intarr_Num[i]);

        int_Sum += intarr_Num[i];
        int_Sum_2 += intarr_Num[i] * intarr_Num[i];
    }

    flt_Avg = int_Sum / 100.0;
    flt_Var = int_Sum_2 / 100.0 - flt_Avg * flt_Avg;

    printf("avg=%.3f\n", flt_Avg);
    printf("var=%.3f", flt_Var);

    return 0;
}
