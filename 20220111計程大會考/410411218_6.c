// ID:410411218 name:Yu,Tse-Hsun class:1A
#include <stdio.h>

void Ninety_Nine(int n, int curr)
{
    if(curr == 0) return;

    Ninety_Nine(n, curr - 1);

    for(int i = 1; i <= n; i++)
    {
        printf("%d*%d=%d ", curr, i, curr * i);
    }

    printf("\n");
}

int main()
{
    int n;

    scanf("%d", &n);

    Ninety_Nine(n, n);

    return 0;
}
