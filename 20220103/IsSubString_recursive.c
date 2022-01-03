#include <stdio.h>

int IsSubString(char[], char*, char*, char[], char*);

int main()
{
    char str[100];
    char sub[100];

    scanf("%s %s", str, sub);
    printf("%d", IsSubString(str, str, str, sub, sub));

    return 0;
}

int IsSubString(char str[], char *curr1, char *temp, char sub[], char *curr2)
{
    if(*curr1 == '\0') return (*curr2 == '\0');
    else if(*curr2 == '\0') return 1;
    else
    {
        if(*temp == *curr2) return IsSubString(str, curr1, ++temp, sub, ++curr2);
        else
        {
            temp = ++curr1;

            return IsSubString(str, curr1, temp, sub, sub);
        }
    }
}
