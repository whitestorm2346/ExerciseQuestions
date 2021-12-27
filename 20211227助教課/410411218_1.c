// name: Yu, Tse-Hsun class: 1A ID: 410411218
#include <stdio.h>

void f(int *num1, int *num2)
{
    if(*num1 > *num2) *num1 *= *num1, *num2 *= 2;
    else if(*num1 < *num2) *num1 *= 2, *num2 *= *num2;
}

int main()
{
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    f(&num1, &num2);

    printf("%d %d", num1, num2);

    return 0;
}
