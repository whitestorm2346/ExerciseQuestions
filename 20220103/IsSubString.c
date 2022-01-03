#include <stdio.h>

int IsSubString(char[], char[]);

int main()
{
    char str[100];
    char sub[100];

    scanf("%s %s", str, sub);
    printf("%d", IsSubString(str, sub));

    return 0;
}

int IsSubString(char str[], char sub[])
{
    char *ptr1 = str, *ptr2 = sub;

    for(; *ptr1 != '\0'; ++ptr1)
    {
        if(*ptr1 == *ptr2)
        {
            char *temp1 = ptr1, *temp2 = ptr2;

            for(; (*temp2 != '\0') && (*temp1 != '\0'); ++temp1, ++temp2)
            {
                if(*temp1 != *temp2) break;
            }

            if(*temp2 == '\0') return 1;
        }
    }

    return 0;
}
