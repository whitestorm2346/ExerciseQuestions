#include <stdio.h>

int main()
{
    int int_Count = 0;
    char str_Input[1000], chr_Check;

    printf("Input a string: ");
    scanf("%[^\n]%*c", str_Input);

    printf("Input a alphabet you want to search: ");
    scanf("%c", &chr_Check);

    for(char *curr = str_Input; *curr != '\0'; curr++)
    {
        if(*curr == chr_Check) int_Count++;
    }

    printf("The string \"%s\" have %d \'%c\'", str_Input, int_Count, chr_Check);

    return 0;
}
