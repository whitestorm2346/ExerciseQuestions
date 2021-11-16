// ID:410411218 name:´åÌÊ³Ô class:1A
#include <stdio.h>

int main()
{
    int int_Sum = 0;

    for(int i = 0, int_Input; i < 10; i++)
    {
        scanf("%d", &int_Input);

        int_Sum += int_Input;
    }

    printf("%d", int_Sum);

    return 0;
}
