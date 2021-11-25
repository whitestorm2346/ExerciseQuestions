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
    for(int int_X = 17, int_Y = 1; int_Y <= 13; int_Y++)
    {
        gotoxy(int_X, int_Y);
        printf("%c", 65);

        if(int_Y % 3 == 2 || int_Y % 3 == 0) int_X--;
    }

    gotoxy(0, 14);

    return 0;
}
