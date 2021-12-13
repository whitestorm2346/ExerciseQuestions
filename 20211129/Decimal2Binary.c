#include <stdio.h>

int Decimal2Binary(int Decimal)
{
    int result = 0;

    for(int base = 1; Decimal; base *= 10, Decimal /= 2)
    {
        result += (Decimal % 2) * base;
    }

    return result;
}

int main()
{
    int int_Decimal;

    scanf("%d", &int_Decimal);
    printf("%d", Decimal2Binary(int_Decimal));

    return 0;
}
