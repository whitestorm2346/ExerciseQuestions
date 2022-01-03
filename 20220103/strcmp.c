#include <stdio.h>

int StringCompare(char[], char[]);

int main()
{
    char str[100];
    char target[100];

    scanf("%s %s", str, target);
    printf("%d", StringCompare(str, target));

    return 0;
}

int StringCompare(char str[], char target[])
{
    char *ptr1 = str, *ptr2 = target;

    for(; *ptr1 != '\0' || *ptr2 != '\0'; ++ptr1, ++ptr2)
    {
        if(*ptr1 != *ptr2) return 0;
    }

    return 1;
}
