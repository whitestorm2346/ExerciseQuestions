#include <stdio.h>

#define n_sum(n) \
    int int_Sum = 0;\
    for(int i = 1; i <= n; i++)\
    {\
        int_Sum += i * (i + 1);\
    }\
    printf("%d", int_Sum);

int main()
{
    int int_Num;

    printf("n: ");
    scanf("%d", &int_Num);

    n_sum(int_Num);

    return 0;
}
