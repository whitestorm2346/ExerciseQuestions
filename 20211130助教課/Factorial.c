#include <stdio.h>

void Factorial(int, int);

int main()
{
    int num;

    printf("計算 n 的階乘值，請輸入 n 的值\n");
    scanf("%d", &num);

    Factorial(num, 1);

    return 0;
}

void Factorial(int num, int res)
{
    if(num)
    {
        res *= num;

        printf("%d*", num);
        Factorial(num - 1, res);
    }
    else printf("\b = %d\n", res);
}
