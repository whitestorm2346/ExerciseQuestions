#include <stdio.h>
#include <math.h>

_Bool fn_IsPrimeNum(int num);

int main()
{
    int int_Num;

    scanf("%d", &int_Num);

    for(int i = 2; i <= int_Num; i++)
    {
        if(fn_IsPrimeNum(i)) printf("%d\n", i);
    }

    return 0;
}

_Bool fn_IsPrimeNum(int num)
{
    if(num < 2) return 0;

    for(int i = 2; i <= sqrt(num); i++)
    {
        if(num % i == 0) return 0;
    }

    return 1;
}
