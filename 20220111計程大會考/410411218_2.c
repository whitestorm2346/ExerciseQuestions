// ID:410411218 name:Yu,Tse-Hsun class:1A
#include <stdio.h>

void Swap(int *num1, int *num2)
{
    int temp = *num1;

    *num1 = *num2;
    *num2 = temp;
}

int main()
{
    int a, b;

    printf("a=");
    scanf("%d", &a);

    printf("b=");
    scanf("%d", &b);

    Swap(&a, &b);

    printf("a=%d\nb=%d", a, b);


    return 0;
}
