#include <stdio.h>

int add(int int_Num1, int int_Num2)
{
    return int_Num1 + int_Num2;
}

int main()
{
    int int_Num1, int_Num2;

    scanf("%d %d", &int_Num1, &int_Num2);
    printf("%d", add(int_Num1, int_Num2));

    return 0;
}
