#include <stdio.h>

void printNarcissisticNum(int, int);

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);

    printNarcissisticNum(m, n);

    return 0;
}

void printNarcissisticNum(int m, int n)
{
    for(int i = m; i <= n; i++)
    {
        int sum = 0;

        for(int j = i; j; j /= 10)
        {
            sum += (j % 10) * (j % 10) * (j % 10);
        }

        if(i == sum) printf("%d\n", i);
    }
}
