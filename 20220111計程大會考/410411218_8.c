// ID:410411218 name:Yu,Tse-Hsun class:1A
#include <stdio.h>
#include <string.h>

int IsSubString(char source[], char target[])
{
    char *ptr1 = source;
    char *ptr2 = target;

    for(; *ptr1 != '\0'; ptr1++)
    {
        if(*ptr1 == *ptr2)
        {
            char *ptr1_temp = ptr1;
            char *ptr2_temp = ptr2;

            for(; *ptr2_temp != '\0'; ptr1_temp++, ptr2_temp++)
            {
                if(*ptr1_temp != *ptr2_temp) break;
            }

            if(*ptr2_temp == '\0') return 1;
        }
    }

    return 0;
}

int main()
{
    char src[100];
    char target[100];

    scanf("%[^\n]%*c", src);
    scanf("%[^\n]%*c", target);

    printf("%d", IsSubString(src, target));

    return 0;
}
