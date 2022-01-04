// ID:410411218 name:Yu,Tse-Hsun class:1A
#include <stdio.h>

void DeleteEmpty(char[]);

int main()
{
    char str[100];

    scanf("%[^\n]%*c", str);

    DeleteEmpty(str);

    printf("%s", str);

    return 0;
}

void DeleteEmpty(char str[])
{
    char str_temp[100];
    char *ptr1 = str, *ptr2 = str_temp;

    for(; *ptr1 != '\0'; ++ptr1)
    {
        if(*ptr1 == ' ') continue;

        *(ptr2++) = *ptr1;
    }

    *ptr2 = '\0';

    for(ptr1 = str, ptr2 = str_temp; *ptr2 != '\0'; ++ptr2)
    {
        *(ptr1++) = *ptr2;
    }

    *ptr1 = '\0';
}
