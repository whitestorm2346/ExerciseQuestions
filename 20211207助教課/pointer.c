#include <stdio.h>

int main()
{
    int a = 100;
    int *p;
    int *q;

    printf("==========�ŧi�ܼƮ�==========\n");
    printf("&a=%p\ta=%d\n", &a, a);
    printf("&p=%p\n", &p);
    printf("&q=%p\n", &q);

    p = &a;

    printf("==========�]�wp=&a��==========\n");
    printf("p=%p\t*p=%d\n", p, *p);

    q = p;

    printf("==========�]�wq=p��==========\n");
    printf("q=%p\t*q=%d\n", q, *q);

    *q = 50;

    printf("==========�]�w*q=50��==========\n");
    printf("p=%p\t*p=%d\n", p, *p);
    printf("q=%p\t*q=%d\n", q, *q);
    printf("a=%d\n", a);

    return 0;
}
