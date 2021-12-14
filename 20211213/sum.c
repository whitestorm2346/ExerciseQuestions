#include <stdio.h>

int sum()
{
    int input;

    scanf("%d", &input);

    if(input == (-99)) return 0;
    else return input + sum();
}

int main()
{
    printf("sum = %d", sum());

    return 0;
}
