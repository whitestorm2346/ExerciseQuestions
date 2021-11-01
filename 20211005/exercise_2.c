#include <stdio.h>

int main()
{
    int int_kg, int_pound;

    printf("Input your weight(kg):");
    scanf("%d", &int_kg);

    int_pound = int_kg * 2.2 + 0.5;

    printf("Your weight = %d pounds", int_pound);

    return 0;
}
