// name: Yu, Tse-Hsun class: 1A ID: 410411218
#include <stdio.h>

int f(int n)
{
    if(n == 1) return 1;

    if(n % 2) return f(n - 1) + f(n + 1);
    else return f(n / 2);
}

int main()
{
    int num;

    scanf("%d", &num);
    printf("%d", f(num));

    return 0;
}
