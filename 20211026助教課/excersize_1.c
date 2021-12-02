#include <stdio.h>

int main()
{
    int int_Sum = 0;
    int int_Start, int_End;

    printf("請輸入起始值與結束值: ");
    scanf("%d %d", &int_Start, &int_End);

    while(int_Start <= int_End)
    {
        int_Sum += int_Start++;
    }

    printf("sum= %d", int_Sum);

    return 0;
}
