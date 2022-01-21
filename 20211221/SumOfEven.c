#include <stdio.h>

int SumOfEven(int);

int main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("The sum of even digits of %d = %d\n", num, SumOfEven(num));

    return 0;
}

int SumOfEven(int num)
{
    if(num == 0) return 0;

    int curr = num % 10;

    if(curr % 2) return SumOfEven(num / 10);
    else return curr + SumOfEven(num / 10);
}
