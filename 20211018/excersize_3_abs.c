#include <stdio.h>

int main()
{
    int int_Num;

    printf("Input a integer: ");
    scanf("%d", &int_Num);

    if(int_Num < 0) printf("%d", -int_Num);
    else printf("%d", int_Num);

    return 0;
}
