#include <stdio.h>

int power(int, int);
void powersum(int, int, int);

int main()
{
    int num1, num2;

    printf("�p�����2~4������M�A�п�J����\n");
    scanf("%d %d", &num1, &num2);

    for(int i = 2; i <= 4; i++)
    {
        powersum(num1, num2, i);
    }

    return 0;
}

int power(int m, int n)
{
    int result = 1;

    for(int i = 0; i < n; i++)
    {
        result *= m;
    }

    return result;
}
void powersum(int num1, int num2, int pow)
{
    printf("%d �P %d �� %d ����M = %d", num1, num2, pow,
           power(num1, pow) + power(num2, pow));
}
