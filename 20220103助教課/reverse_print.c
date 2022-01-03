#include <stdio.h>
#include <string.h>

void reverse_print(char*, int);

int main()
{
    char str[1000];

    scanf("%1000s", str);

    reverse_print(str, strlen(str));

    return 0;
}

void reverse_print(char *str, int size)
{
    if(size <= 0) return;

    printf("%c", str[size - 1]);

    reverse_print(str, size - 1);
}
