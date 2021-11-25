#include <stdio.h>

int main()
{
    int int_Num;

    scanf("%d", &int_Num);

    switch(int_Num % 2)
    {
        case 0: printf("%d is even number\n", int_Num); break;
        case 1: printf("%d is odd number\n", int_Num); break;
    }

    return 0;
}
