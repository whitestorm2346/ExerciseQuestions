#include <stdio.h>

int main()
{
    char chr_Input;

    printf("Input a character: ");
    scanf("%c", &chr_Input);

    if(chr_Input >= 'a' && chr_Input <= 'z') printf("%c", chr_Input - 32);
    else printf("%c", chr_Input);

    return 0;
}
