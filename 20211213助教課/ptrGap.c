#include <stdio.h>

int main()
{
    int a;
    short int *p = &a;
    int *q = &a;
    double *r = &a;
    float *s = &a;

    printf("&a = %p\n", &a);
    printf(" p = %p\n", p);
    printf(" q = %p\n", q);
    printf(" r = %p\n", r);
    printf(" s = %p\n", s);

    printf("\n===============\n\n");

    p -= 2, q -= 2, r -= 2, s -= 2;

    printf("&a = %p\n", &a);
    printf(" p = %p\n", p);
    printf(" q = %p\n", q);
    printf(" r = %p\n", r);
    printf(" s = %p\n", s);

    return 0;
}
