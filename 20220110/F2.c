#include <stdio.h>

void F(int);

int main()
{
    int num;

    scanf("%d", &num);

    F(num);

    return 0;
}

void F(int num)
{
    if(num / 10 == 0) printf("%d\n", num);
    else
    {
        F(num / 10);

        printf("%d\n", num % 10);
    }
}
