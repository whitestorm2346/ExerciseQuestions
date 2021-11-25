#include <stdio.h>

int main()
{
    char chr_Input;

    scanf("%c", &chr_Input);

    if(chr_Input >= 'A' && chr_Input <= 'Z') chr_Input += 32;

    switch(chr_Input)
    {
        case 'a': case 'e': case 'i':
        case 'o': case 'u': printf("%c is vowel\n", chr_Input); break;
        default: printf("%c is consonant\n", chr_Input); break;
    }

    return 0;
}
