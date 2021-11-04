#include <stdio.h>

int main()
{
    char chr_Input;

    printf("Input a character: ");
    scanf("%c", &chr_Input);

    if((chr_Input >= 'a' && chr_Input <= 'z') ||
       (chr_Input >= 'A' && chr_Input <= 'Z')) printf("alphabet");
    else if(chr_Input >= '0' && chr_Input <= '9') printf("digit");
    else printf("special character");

    return 0;
}
