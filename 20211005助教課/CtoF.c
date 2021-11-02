#include <stdio.h>

int main()
{
    float flt_C;

    scanf("%f", &flt_C);
    printf("%d", (int)(flt_C * (9.0 / 5.0) + 32));

    return 0;
}
