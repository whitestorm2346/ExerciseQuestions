#include <stdio.h>

int main()
{
    float flt_Value;

    printf("Input a floating point:");
    scanf("%f", &flt_Value);
    printf("value = %d", (int)(flt_Value + 0.5f));

    return 0;
}
