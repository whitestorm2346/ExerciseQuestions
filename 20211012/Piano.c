#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define DO  523
#define RE  587
#define MI  659
#define FA  698
#define SOL 783
#define LA  880
#define SI  988

int main()
{
    char chr_Input;

Loop:
    chr_Input = getch();

    if(chr_Input == '1') Beep(DO, 200);

    if(chr_Input == '2') Beep(RE, 200);

    if(chr_Input == '3') Beep(MI, 200);

    if(chr_Input == '4') Beep(FA, 200);

    if(chr_Input == '5') Beep(SOL, 200);

    if(chr_Input == '6') Beep(LA, 200);

    if(chr_Input == '7') Beep(SI, 200);

    goto Loop;

    return 0;
}
