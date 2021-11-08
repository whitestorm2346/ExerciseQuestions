#include <stdio.h>

int main()
{
    int int_Type, int_Prise = 0;
    float flt_Distance;

    printf("Day or Night(Day->1, Night->2): ");
    scanf("%d", &int_Type);

    printf("Input the distance(km, floating point number): ");
    scanf("%f", &flt_Distance);

    flt_Distance *= 1000;

    if(int_Type == 1)
    {
        if(flt_Distance > 1500) int_Prise = 70 + 5 * ((flt_Distance - 1500) / 300);
        else int_Prise = 70;
    }
    else if(int_Type == 2)
    {
        if(flt_Distance > 1250) int_Prise = 70 + 5 * ((flt_Distance - 1250) / 250);
        else int_Prise = 70;
    }

    printf("prise: %d", int_Prise);

    return 0;
}
