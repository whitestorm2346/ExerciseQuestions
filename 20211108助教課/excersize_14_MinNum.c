#include <stdio.h>

#define INT_MAX 2147483647

int main()
{
    int int_Min = INT_MAX, int_MinIdx = -1;

    for(int i = 0, int_Input; i < 100; i++)
    {
        scanf("%d", &int_Input);

        if(int_Input < int_Min)
        {
            int_Min = int_Input;
            int_MinIdx = i;
        }
    }

    printf("%d", int_MinIdx);

    return 0;
}
