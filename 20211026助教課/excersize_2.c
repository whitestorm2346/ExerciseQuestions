#include <stdio.h>
#include <conio.h>

int main()
{
    int int_Count = 0;
    char chr_Input;

    do
    {
        printf("�j������%d��\n", ++int_Count);
        printf("�O�_�~�����(y/n)\n");

        chr_Input = getche();

        printf("\n");
    }
    while(chr_Input == 'y');

    printf("�j���`�@����F%d��", int_Count);

    return 0;
}
