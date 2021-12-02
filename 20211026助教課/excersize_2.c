#include <stdio.h>
#include <conio.h>

int main()
{
    int int_Count = 0;
    char chr_Input;

    do
    {
        printf("迴圈執行第%d次\n", ++int_Count);
        printf("是否繼續執行(y/n)\n");

        chr_Input = getche();

        printf("\n");
    }
    while(chr_Input == 'y');

    printf("迴圈總共執行了%d次", int_Count);

    return 0;
}
