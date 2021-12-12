#include <stdio.h>

int main()
{
    int intarr_Num[10] = {35, 40, 68, 95, 75, 43, 85, 91, 47, 66};
    int int_Search, i;

    printf("Input a integer: ");
    scanf("%d", &int_Search);

    for(i = 0; i < 10; i++)
    {
        if(int_Search == intarr_Num[i]) break;
    }

    if(i == 10) printf("The number is not a element in this array\n");
    else printf("The number is No.%d element in this array\n", i + 1);

    return 0;
}
