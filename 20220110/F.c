#include <stdio.h>

int F(int);

int main()
{
    int num;

    scanf("%d", &num);
    printf("even sum = %d", F(num));

    return 0;
}

int F(int num)
{
    if(num) return ((num % 2) ? 0 : num) + F(num - 1);
    else return 0;
}
