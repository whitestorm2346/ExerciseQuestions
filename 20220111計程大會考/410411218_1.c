// ID:410411218 name:Yu,Tse-Hsun class:1A
#include <stdio.h>

double Triangle_Area(double base, double height)
{
    return (base * height) / 2;
}

int main()
{
    double base, height;

    scanf("%lf %lf", &base, &height);
    printf("%f", Triangle_Area(base, height));


    return 0;
}
