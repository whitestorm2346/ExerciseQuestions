#include <stdio.h>

int main()
{
    for(int int_Input;;)
    {
        scanf("%d", &int_Input);

        if(int_Input == 0) break;

        if(int_Input % 11) printf("%d is a multiple of 11\n", int_Input);
        else printf("%d is not a multiple of 11\n", int_Input);
    }

    return 0;
}
