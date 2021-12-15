#include <stdio.h>

float area_Trapezoid(float, float, float);

int main()
{
    float topline, baseline, height;

    scanf("%f %f %f", &topline, &baseline, &height);
    printf("%.2f", area_Trapezoid(topline, baseline, height));

    return 0;
}

float area_Trapezoid(float topline, float baseline, float height)
{
    return (topline + baseline) * height / 2;
}
