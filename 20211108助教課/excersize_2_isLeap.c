#include <stdio.h>

int main()
{
    int int_Year;

    printf("民國年: ");
    scanf("%d", &int_Year);

    int_Year += 1911;

    if((int_Year % 400 == 0) || (int_Year % 4 == 0 && int_Year % 100 != 0)) printf("是閏年");
    else printf("不是閏年");

    return 0;
}
