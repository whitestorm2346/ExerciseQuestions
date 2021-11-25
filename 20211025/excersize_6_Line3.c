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
    for(int int_X = 9, int_Y = 13, int_Count = 0; int_X <= 18; int_X++, int_Y--)
    {
        gotoxy(int_X, int_Y);
        printf("%c", 65);

        if((++int_Count) % 2 == 0)
        {
            int_Count = 0;
            int_Y--;
        }
    }

    gotoxy(0, 14);

    return 0;
}
