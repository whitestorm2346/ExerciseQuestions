#include <stdio.h>

double countNSum(int);

int main()
{
    int num;

    scanf("%d", &num);
    printf("sum: %f", countNSum(num));

    return 0;
}

double countNSum(int num)
{
    double result = 0;

    if(num % 2)
    {
        for(int i = 1; i <= num; i++)
        {
            result += 1.0 / i;
        }
    }
    else
    {
        for(int i = 1; i <= num; i++)
        {
            result += i * (i + 1);
        }
    }

    return result;
}
