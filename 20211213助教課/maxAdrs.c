#include <stdio.h>

#define max(x, y) ((x > y) ? x : y)

int main()
{
    int a;
    short int *p = &a;
    int *q = &a;
    double *r = &a;
    float *s = &a;

    p -= 2, q -= 2, r -= 2, s -= 2;

    printf("max address = %p\n",
           max(max((double*)p, (double*)q), max(r, (double*)s)));

    return 0;
}
