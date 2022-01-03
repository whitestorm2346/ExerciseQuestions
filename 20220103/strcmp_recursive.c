#include <stdio.h>

int StringCompare(char[], char*, char[], char*);

int main()
{
    char str[100];
    char target[100];

    scanf("%s %s", str, target);
    printf("%d", StringCompare(str, str, target, target));

    return 0;
}

int StringCompare(char str[], char *curr1, char target[], char *curr2)
{
    if(*curr1 == '\0' || *curr2 == '\0') return (*curr1 == *curr2);

    if(*curr1 != *curr2) return 0;
    else return StringCompare(str, ++curr1, target, ++curr2);
}
