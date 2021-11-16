// ID:410411218 name:´åÌÊ³Ô class:1A
#include <stdio.h>

int main()
{
    int int_Num_2, int_Num_10 = 0;

    scanf("%d", &int_Num_2);

    for(int int_Count = 1; int_Num_2 > 0; int_Count *= 2, int_Num_2 /= 10)
    {
        int_Num_10 += (int_Num_2 % 10) * int_Count;
    }

    printf("%d", int_Num_10);

    return 0;
}
