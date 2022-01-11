// ID:410411218 name:Yu,Tse-Hsun class:1A
#include <stdio.h>
#include <stdlib.h>

int Binary2Decimal(int num)
{
    if(num) return (num % 10) + 2 * Binary2Decimal(num / 10);
    else return 0;
}

int main()
{
    int num;

    scanf("%d", &num);
    printf("%d", Binary2Decimal(num));

    return 0;
}
