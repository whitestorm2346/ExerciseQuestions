#include <stdio.h>

int main()
{
    char chr_Input;

    printf("Input a alphabet: ");
    scanf("%c", &chr_Input);

    if(chr_Input >= 'a' && chr_Input <= 'z') printf("Your input is lower case");
    else if(chr_Input >= 'A' && chr_Input <= 'Z') printf("Your input is upper case");

    return 0;
}
