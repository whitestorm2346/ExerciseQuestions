// ID:410411218 name:´åÌÊ³Ô class:1A
#include <stdio.h>

int main()
{
    int int_Num, int_Sum = 0, int_Curr = 5;

    scanf("%d", &int_Num);

    while(int_Curr <= int_Num)
    {
        int_Sum += int_Curr;
        int_Curr += 5;
    }

    printf("%d", int_Sum);

    return 0;
}
