#include <stdio.h>

int Strlen(char*);

int main()
{
    char str[1000];

    scanf("%1000s", str);
    printf("strlen: %d", Strlen(str));

    return 0;
}

int Strlen(char *str)
{
    int count = 0;

    for(char *ptr = str; *ptr != '\0'; ++ptr, ++count);

    return count;
}
