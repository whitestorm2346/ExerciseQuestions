#include <stdio.h>

int main()
{
    // F is Fahrenheit, C is Centigrade
    int F, C;

    printf("Enter Fahrenheit temperature: ");
    scanf("%d", &F);

    C = (F-32) * 5.0 / 9.0 + 0.5;

    printf("Centigrade temperature = %d", C);

    return 0;
}
