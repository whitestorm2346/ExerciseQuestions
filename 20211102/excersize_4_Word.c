#include <stdio.h>
#include <windows.h>

void HideCursor()
{
    CONSOLE_CURSOR_INFO cursor_info = {1, 0};
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
}

int main()
{
    char words[13] = "Hello World!";

    for(int i = 0;;)
    {
        HideCursor();

        for(int j = 0; j < 12; j++, i = ++i % 12)
        {
            printf("%c", words[i]);
        }

        printf("\r");
        _sleep(100);

        i++;
    }

    return 0;
}
