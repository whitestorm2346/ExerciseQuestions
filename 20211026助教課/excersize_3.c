#include <stdio.h>

int main()
{
    for(int i = 1, j = 5; j >= 0; j--, i += 2)
    {
        for(int k = 0; k < j; k++)
        {
            printf(" ");
        }

        for(int k = 0; k < i; k++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
