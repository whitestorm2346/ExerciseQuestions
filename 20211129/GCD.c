#include <stdio.h>

int GCD(int, int);

int main()
{
    int int_Num1, int_Num2;

    scanf("%d %d", &int_Num1, &int_Num2);
    printf("GCD = %d", GCD(int_Num1, int_Num2));

    return 0;
}

int GCD(int num1, int num2)
{
    if(num2 > num1)
    {
        int temp = num1;

        num1 = num2;
        num2 = temp;
    }

    while(num1 % num2)
    {
        int temp = num1;

        num1 %= num2;
        num1 = num2;
        num2 = temp;
    }

    return num2;
}
