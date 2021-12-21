#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void hideCursor();
void ScrollingText(char [], int, int);

int main()
{
    char news[] = "UK travel ban: These countries have imposed new restrictions. ";

    system("cls");

    ScrollingText(news, 30, sizeof(news) - 1);

    return 0;
}

void hideCursor()
{
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;

    info.dwSize = 100;
    info.bVisible = FALSE;

    SetConsoleCursorInfo(hOut, &info);
}
void ScrollingText(char news[], int width, int size)
{
    for(int i = 0;; i = (++i) % size)
    {
        hideCursor();

        for(int j = 0; j < width; j++)
        {
            int curr_idx = (i + j) % size;

            printf("%c", news[curr_idx]);
        }

        printf("\r");

        _sleep(250);
    }
}
