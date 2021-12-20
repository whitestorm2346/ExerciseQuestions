#include <stdio.h>

void Hanoi(int, int, int, int);

int main()
{
    int int_Plates;

    scanf("%d", &int_Plates);

    Hanoi(int_Plates, 1, 2, 3);

    return 0;
}

void Hanoi(int int_Plates, int int_Begin, int int_Mid, int int_Des)
{
    if(int_Plates == 1) printf("Plate%d: %d->%d\n", int_Plates, int_Begin, int_Des);
    else
    {
        Hanoi(int_Plates - 1, int_Begin, int_Des, int_Mid); // move second~int_Plates
        printf("Plate%d: %d->%d\n", int_Plates, int_Begin, int_Des);
        Hanoi(int_Plates - 1, int_Mid, int_Begin, int_Des); // move top
    }
}
