#include <stdio.h>
#include <math.h>

int main()
{
    int int_Num1, int_Num2, int_Num3;

    printf("Input three integers:");
    scanf("%d %d %d", &int_Num1, &int_Num2, &int_Num3);

    printf("Average(%d,%d,%d) = %.2f", int_Num1, int_Num2, int_Num3,
                                      (int_Num1 + int_Num2 + int_Num3) / 3.0f);

    return 0;
}
