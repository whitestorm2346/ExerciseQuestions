// name: Yu, Tse-Hsun class: 1A ID: 410411218
#include <stdio.h>

void primeNum(int num, int curr)
{
    if(num == 0 || num == 1) return;

    if(num % curr == 0)
    {
        printf("%d", curr);

        num /= curr;

        if(num != 0 && num != 1) printf("*");

        primeNum(num, curr);
    }
    else primeNum(num, curr + 1);
}

int main()
{
    int num;

    scanf("%d", &num);

    primeNum(num, 2);

    return 0;
}
