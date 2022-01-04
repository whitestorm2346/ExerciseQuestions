// ID:410411218 name:Yu,Tse-Hsun class:1A
#include <stdio.h>

float power(float, int);

int main()
{
    float x;
    int y;

    scanf("%f %d", &x, &y);
    printf("%f", power(x, y));

    return 0;
}

float power(float x, int y)
{
    if(y == 0) return 1.f;
    else return x * power(x, y - 1);
}
