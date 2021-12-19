#include <stdio.h>

#define PI 3.1415926
#define r_square(r) (r * r)
#define r_cube(r) (r * r * r)

int main()
{
    int int_Radius;

    printf("radius: ");
    scanf("%d", &int_Radius);

    printf("area: %f\n", PI * r_square(int_Radius));
    printf("volume: %f", (4.0 / 3.0) * PI * r_cube(int_Radius));

    return 0;
}
