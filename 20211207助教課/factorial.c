#include <stdio.h>

#define factorial(n) \
    if(n == 0) printf("1");\
    else\
    {\
        int res = 1;\
        for(int i = 2; i <= n; i++)\
        {\
            res *= i;\
        }\
        printf("%d", res);\
    }

int main()
{
    int int_Num;

    printf("n: ");
    scanf("%d", &int_Num);

    factorial(int_Num);

    return 0;
}
