#include <stdio.h>

int main()
{
    int int_cm, int_inches, int_feet;

    printf("Input your height(cm):");
    scanf("%d", &int_cm);

    int_inches = int_cm / 2.54 + 0.5;
    int_feet = int_inches / 12;
    int_inches %= 12;

    printf("Your height = %d feet %d inches", int_feet, int_inches);

    return 0;
}
