#include <stdio.h>
#include <math.h>

int main()
{
    int int_X1, int_Y1, int_X2, int_Y2;
    int int_Distance;

    printf("Input coordinate (x1,y1)(x2,y2):");
    scanf("%d %d %d %d", &int_X1, &int_Y1, &int_X2, &int_Y2);

    int_Distance = sqrt((int_X1 - int_X2) * (int_X1 - int_X2) + (int_Y1 - int_Y2) * (int_Y1 - int_Y2));

    printf("Distance = %.2f", int_Distance);

    return 0;
}
