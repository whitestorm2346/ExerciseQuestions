#include <stdio.h>

int main()
{
    int int_Input, int_Sum = 0;

    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &int_Input);

        if(int_Input < 0) continue;

        int_Sum += int_Input;
    }

    printf("%d", int_Sum);

    return 0;
}
