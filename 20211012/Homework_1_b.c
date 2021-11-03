#include <stdio.h>

int main()
{
    int int_Limit;
    int int_Count = 1;

    scanf("%d", &int_Limit);

start:
    printf("%d ", int_Count);

    int_Count += 2;

    if(int_Count <= int_Limit) goto start;

    return 0;
}
