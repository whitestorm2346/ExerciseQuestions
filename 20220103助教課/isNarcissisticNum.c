#include <stdio.h>

_Bool isNarcissisticNum(int);

int main()
{
    int num;

    scanf("%d", &num);

    if(isNarcissisticNum(num)) printf("%d is Narcissistic number", num);
    else printf("%d is not Narcissistic number", num);

    return 0;
}

_Bool isNarcissisticNum(int num)
{
    int temp = num, sum = 0;

    for(; num; num /= 10)
    {
        sum += (num % 10) * (num % 10) * (num % 10);
    }

    return (temp == sum);
}
