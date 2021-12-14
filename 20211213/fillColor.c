#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>

#define Xsize 24
#define Ysize 12

char matrix[Ysize][Xsize + 1] = {
    {"########################"},
    {"#     #                #"},
    {"#     #         #####  #"},
    {"#                      #"},
    {"#       #####          #"},
    {"#           #      #####"},
    {"#####       #          #"},
    {"#                      #"},
    {"#          #######     #"},
    {"#    #                 #"},
    {"#    #                 #"},
    {"########################"}
};

_Bool isInside(int, int);
void gotoXY(int, int);
void setColor(int color);
void fill_DFS(int, int, int);

int main()
{
    int color, x, y;

    srand(time(NULL));

    for(int i = 0; i < 12; i++)
    {
        printf("%s\n", matrix[i]);
    }

    printf("\ncolor(1-15): ");
    scanf("%d", &color);

    color = color * 16 + color;

    fill_DFS(rand() % 23 + 1, rand() % 10 + 1, color);

    gotoXY(0, 14);

    return 0;
}

_Bool isInside(int x, int y)
{
    return ((x > 0 && x < Xsize - 1) && (y > 0 && y < Ysize - 1));
}
void gotoXY(int x, int y)
{
    COORD pos = {x, y};
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleCursorPosition(hOut, pos);
}
void setColor(int color)
{
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hOut, color);
}
void fill_DFS(int x, int y, int color)
{
    _sleep(5);

    if(matrix[y][x] == ' ')
    {
        matrix[y][x] = '*';

        gotoXY(x, y);
        setColor(color);
        printf("*");
        setColor(7);
    }

    if(isInside(x, y - 1) && matrix[y - 1][x] == ' ') fill_DFS(x, y - 1, color);

    if(isInside(x + 1, y) && matrix[y][x + 1] == ' ') fill_DFS(x + 1, y, color);

    if(isInside(x, y + 1) && matrix[y + 1][x] == ' ') fill_DFS(x, y + 1, color);

    if(isInside(x - 1, y) && matrix[y][x - 1] == ' ') fill_DFS(x - 1, y, color);
}
