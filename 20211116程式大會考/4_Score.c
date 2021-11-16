// ID:410411218 name:¥ÂÃ ≥‘ class:1A
#include <stdio.h>

int main()
{
    int int_Score;

    scanf("%d", &int_Score);

    switch(int_Score)
    {
        case 80 ... 100: printf("A"); break;
        case 60 ... 79: printf("B"); break;
        case 40 ... 59: printf("C"); break;
        case 0 ... 39: printf("D"); break;
    }

    return 0;
}
