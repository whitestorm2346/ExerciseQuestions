// ID:410411218 name:���ʳ� class:1A
#include <stdio.h>

int main()
{
    int int_Num;

    scanf("%d", &int_Num);

    while(int_Num)
    {
        printf("%d", int_Num % 10);

        int_Num /= 10;
    }

    return 0;
}
