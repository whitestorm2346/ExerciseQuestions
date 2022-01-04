// ID:410411218 name:Yu,Tse-Hsun class:1A
#include <stdio.h>

void reverse_print(char[], int);

int main()
{
    char str[6];

    scanf("%5s", str);

    reverse_print(str, 5);

    return 0;
}

void reverse_print(char str[], int size)
{
    if(size == 0) return;
    else
    {
        printf("%c", str[size - 1]);

        return reverse_print(str, size - 1);
    }
}
