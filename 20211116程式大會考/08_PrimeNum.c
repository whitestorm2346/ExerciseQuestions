// ID:410411218 name:´åÌÊ³Ô class:1A
#include <stdio.h>
#include <math.h>

int main()
{
    int int_Num;

    scanf("%d", &int_Num);

    for(int i = 2; i <= int_Num; i++)
    {
        _Bool bl_IsPrimeNum = 1;

        for(int j = 2; j <= sqrt(i); j++)
        {
            if(i % j == 0)
            {
                bl_IsPrimeNum = 0;

                break;
            }
        }

        if(bl_IsPrimeNum) printf("%d ", i);
    }

    return 0;
}
