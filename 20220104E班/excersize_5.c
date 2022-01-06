#include <stdio.h>

int main()
{
    double sum = 0;

    for(int i = 0, num1 = 1, num2 = 2; i < 20; i++)
    {
        sum += (double)num2 / num1;

        int temp = num1 + num2;

        num1 = 2, num2 = temp;
    }

    printf("%f", sum);

    return 0;
}
