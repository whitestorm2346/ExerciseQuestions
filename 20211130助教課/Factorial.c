#include <stdio.h>

void Factorial(int, int);

int main()
{
    int num;

    printf("�p�� n �������ȡA�п�J n ����\n");
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
