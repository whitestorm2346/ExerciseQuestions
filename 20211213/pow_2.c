#include <stdio.h>

int pow_2(int num)
{
    if(num == 0) return 1;
    else return 2 * pow_2(num - 1);
}

int main()
{
    int num;

    scanf("%d", &num);
    printf("2^%d = %d", num, pow_2(num));

    return 0;
}
