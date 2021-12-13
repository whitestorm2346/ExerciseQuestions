#include <stdio.h>

int IsEven(int num)
{
    return !(num % 2);
}

int main(void)
{
    int int_Num;

    scanf("%d", &int_Num);

    if(IsEven(int_Num)) printf("%d is even number", int_Num);
    else printf("%d is odd number", int_Num);

    return 0;
}
