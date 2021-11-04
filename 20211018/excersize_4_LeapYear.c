#include <stdio.h>

int main()
{
    int int_Year;

    printf("Input a year: ");
    scanf("%d", &int_Year);

    if((int_Year % 400 == 0) || ((int_Year % 4 == 0) && (int_Year % 100 != 0))) printf("leap year");
    else printf("common year");

    return 0;
}
