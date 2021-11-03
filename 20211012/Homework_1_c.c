#include <stdio.h>
#include <math.h>

int main()
{
    int int_Limit, int_Check, i;
    int int_Count = 1;

    scanf("%d", &int_Limit);

    Loop1:
        if(int_Count < 2) int_Check = 0;

        if(int_Count == 2)
        {
            int_Check = 1;
            goto breakpoint;
        }

        if(int_Count > 2) int_Check = 1;

        i = 2;

        for_Loop:
            if(int_Count % i++ == 0)
            {
                int_Check = 0;
                goto breakpoint;
            }

            if(i <= sqrt(int_Count)) goto for_Loop;

    breakpoint:

        if(int_Check) printf("%d ", int_Count);

        int_Count++;

        if(int_Count <= int_Limit) goto Loop1;

    return 0;
}
