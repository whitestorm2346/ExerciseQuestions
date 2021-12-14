#include <stdio.h>

int countEven(int);

int main()
{
    int num;

    scanf("%d", &num);

    printf("even count = %d", countEven(num));

    return 0;
}

int countEven(int num)
{
    if(num / 10 == 0) return !(num % 2);
    else return !(num % 2) + countEven(num / 10);
}
