#include <stdio.h>

char Uppercase(char);

int main()
{
    char a, b;

    scanf("%c", &a);

    b = Uppercase(a);

    printf("%c", b);

    return 0;
}

char Uppercase(char chr)
{
    if(chr >= 'a' && chr <= 'z') return chr - 32;
}
