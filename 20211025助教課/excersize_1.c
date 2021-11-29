#include <stdio.h>

int main()
{
    int int_Sum = 0;

    for(int i = 1; i <= 100; i += 2)
    {
        int_Sum += i;
    }

    printf("%d", int_Sum);

    return 0;
}
