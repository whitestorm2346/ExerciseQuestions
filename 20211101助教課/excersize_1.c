#include <stdio.h>

int main()
{
    int intarr_Num[5] = {10, 15, 30, 25, 40};

    printf("°}¦C¤j¤p: %d bytes\n", sizeof(intarr_Num));

    for(int i = 0; i < 5; i++)
    {
        printf("number[%d] -> %d\n", i, intarr_Num[i]);
    }

    return 0;
}
