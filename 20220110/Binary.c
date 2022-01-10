#include <stdio.h>

int Binary(int);

int main()
{
    int decimal;

    scanf("%d", &decimal);
    printf("binary = %d", Binary(decimal));

    return 0;
}

int Binary(int num)
{
    if(num) return (num % 2) + 10 * Binary(num / 2);
    else return 0;
}
