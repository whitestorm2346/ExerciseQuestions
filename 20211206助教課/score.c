#include <stdio.h>

void fn_Score(int);

int main()
{
    int int_TestCount;

    printf("請輸入要計算的科目數\n");
    scanf("%d", &int_TestCount);

    fn_Score(int_TestCount);

    return 0;
}

void fn_Score(int int_TestCount)
{
    int int_Sum = 0;
    float flt_Avg;

    for(int i = 0, int_Input; i < int_TestCount; i++)
    {
        printf("請輸入第%d科的成績:\n", i + 1);
        scanf("%d", &int_Input);

        int_Sum += int_Input;
    }

    flt_Avg = (float)int_Sum / int_TestCount;

    printf("您的總分是：%d\n", int_Sum);
    printf("您的平均是：%.2f\n", flt_Avg);

    if(flt_Avg >= 90) printf("評語：太棒了\n");
    else if(flt_Avg >= 70) printf("評語：讚\n");
    else printf("評語：加油\n");
}
