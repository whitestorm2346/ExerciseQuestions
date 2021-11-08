#include <stdio.h>

int main()
{
    char *str_Input;

    printf("Input a string: ");
    scanf("%[^\n]%*c", str_Input);

    for(char *curr = str_Input; *curr != '\0'; curr++)
    {
        if(*curr >= 'A' && *curr <= 'Z') *curr += 32;
        else if(*curr >= 'a' && *curr <= 'z') *curr -= 32;
    }

    printf("After switching the case: %s", str_Input);

    return 0;
}
