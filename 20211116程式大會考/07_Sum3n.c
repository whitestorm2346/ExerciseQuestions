// ID:410411218 name:´åÌÊ³Ô class:1A
#include <stdio.h>

int main()
{
    int int_3Sum = 0;

    for(int int_Input;;)
    {
        scanf("%d", &int_Input);

        if(int_Input == -99) break;
        else if(int_Input % 3 == 0) int_3Sum += int_Input;
    }

    printf("%d", int_3Sum);

    return 0;
}
