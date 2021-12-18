#include <stdio.h>

int Fibonacci(int int_Num)
{
    if(int_Num == 0 || int_Num == 1) return int_Num;
    else return Fibonacci(int_Num - 1) + Fibonacci(int_Num - 2);
}

int main()
{
    int int_Num;

    printf("費式數列第幾項: ");
    scanf("%d", &int_Num);

    printf("Ans: %d\n", Fibonacci(int_Num));

    return 0;
}
