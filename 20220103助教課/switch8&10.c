#include <stdio.h>

int change(int, int);

int main()
{
    int num;

    scanf("%d", &num);
    printf("8 -> 10: %d\n", change(8, num));
    printf("10 -> 8: %d\n", change(10, num));

    return 0;
}

int change(int digits, int num)
{
    int result = 0;

    if(digits == 8)
    {
        for(int base = 1; num; num /= 10, base *= 8)
        {
            result += base * (num % 10);
        }
    }
    else if(digits == 10)
    {
        for(int base = 1; num; num /= 8, base *= 10)
        {
            result += base * (num % 8);
        }
    }

    return result;
}


