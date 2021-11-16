// ID:410411218 name:¥ÂÃ ≥‘ class:1A
#include <stdio.h>

int main()
{
    int int_Size;

    scanf("%d", &int_Size);

    for(int i = 0; i < int_Size; i++)
    {
        for(int j = i; j > 0; j--)
        {
            printf(" ");
        }

        for(int j = int_Size - i; j > 0; j--)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
