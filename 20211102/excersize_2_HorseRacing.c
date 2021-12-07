#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define END 69

typedef struct Coordinate
{
    int x;
    int y;
} Coordinate;

int fn_Goal(Coordinate *coor_Horse);
_Bool fn_AllEnd(Coordinate *coor_Horse);
void HideCursor();
void fn_Preset();
void gotoxy(int, int);

int main()
{
    srand(time(NULL));

    Coordinate coor_Horse[4] = {{0, 0}, {0, 2}, {0, 4}, {0, 6}};
    int intarr_Order[4] = {};

    system("cls");
    fn_Preset();
    HideCursor();

    for(int i = 0, int_Order = 0; !fn_AllEnd(coor_Horse); i = ++i % 4)
    {
        if(coor_Horse[i].x >= END)
        {
            _sleep(50);

            continue;
        }

        int int_Rand = rand() % 2;

        HideCursor();
        gotoxy(coor_Horse[i].x, coor_Horse[i].y);
        printf("  ");

        coor_Horse[i].x += (int_Rand) ? 2 : 1;

        if(coor_Horse[i].x >= END) coor_Horse[i].x = END;

        HideCursor();
        gotoxy(coor_Horse[i].x, coor_Horse[i].y);
        printf("H%d", i + 1);

        _sleep(50);

        if(coor_Horse[i].x >= END) intarr_Order[int_Order++] = i + 1;
    }

    gotoxy(0, 9);

    for(int i = 0; i < 4; i++)
    {
        printf(" No.%d -> H%d\n", i + 1, intarr_Order[i]);
    }

    return 0;
}

_Bool fn_AllEnd(Coordinate *coor_Horse)
{
    return (coor_Horse + 0)->x >= END &&
           (coor_Horse + 1)->x >= END &&
           (coor_Horse + 2)->x >= END &&
           (coor_Horse + 3)->x >= END;
}
void fn_Preset()
{
    printf("H1\n");
    printf("---------------------------------------------------------------------goal\n");
    printf("H2\n");
    printf("---------------------------------------------------------------------goal\n");
    printf("H3\n");
    printf("---------------------------------------------------------------------goal\n");
    printf("H4\n");
    printf("---------------------------------------------------------------------goal\n");
}
void HideCursor()
{
    CONSOLE_CURSOR_INFO cursor_info = {1, 0};
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
}
void gotoxy(int x, int y)
{
    COORD pos = {x, y};
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleCursorPosition(hOut, pos);
}
