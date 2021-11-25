#include <stdio.h>
#include <windows.h>

void gotoxy(int int_X, int int_Y)
{
    HANDLE hdl_Console = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD  cor_Pos = {int_X, int_Y};

    SetConsoleCursorPosition(hdl_Console, cor_Pos);
}

int main()
{
    for(int int_X = 2, int_Y; int_X <= 28; int_X++)
    {
        int_Y = 11 - int_X / 3;

        gotoxy(int_X, int_Y);
        printf("%c", 178);
    }

    gotoxy(0, 14);

    return 0;
}
