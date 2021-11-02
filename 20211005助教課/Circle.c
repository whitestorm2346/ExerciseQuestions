#include <stdio.h>

int main()
{
    const float PI = 3.1415926f;
    float flt_r;

    scanf("%f", &flt_r);

    printf("Perimeter: %f\n", 2 * PI * flt_r);
    printf("Area: %f", flt_r * flt_r * PI);

    return 0;
}
