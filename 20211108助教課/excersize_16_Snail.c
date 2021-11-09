#include <stdio.h>

int main()
{
    int int_WallHeight, int_StartHeight, int_Day, int_Night, int_DayCount = 1;

    scanf("%d %d %d %d", &int_WallHeight, &int_StartHeight, &int_Day, &int_Night);

    for(; int_StartHeight < int_WallHeight; int_DayCount++)
    {
        int_StartHeight += int_Day;

        if(int_StartHeight >= int_WallHeight) break;

        int_StartHeight -= int_Night;
    }

    printf("%d", int_DayCount);

    return 0;
}
