#include <stdio.h>

int main()
{
    int int_Side1, int_Side2, int_Side3;

    printf("Input first side: ");
    scanf("%d", &int_Side1);

    printf("Input second side: ");
    scanf("%d", &int_Side2);

    printf("Input third side: ");
    scanf("%d", &int_Side3);

    if(int_Side1 >= int_Side2 && int_Side1 >= int_Side3)
    {
        if(int_Side2 + int_Side3 > int_Side1) printf("Triangle is valid");
        else printf("Triangle is invalid");
    }
    else if(int_Side2 >= int_Side1 && int_Side2 >= int_Side3)
    {
        if(int_Side1 + int_Side3 > int_Side2) printf("Triangle is valid");
        else printf("Triangle is invalid");
    }
    else if(int_Side3 >= int_Side1 && int_Side3 >= int_Side2)
    {
        if(int_Side2 + int_Side1 > int_Side3) printf("Triangle is valid");
        else printf("Triangle is invalid");
    }

    return 0;
}
