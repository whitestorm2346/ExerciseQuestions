#include <stdio.h>

#define multiplication_table(a, b) \
    if(a > b)\
    {\
       int temp = a;\
       a = b;\
       b = temp;\
    }\
    for(int i = a; i <= b; i++)\
    {\
       for(int j = a; j <= b; j++)\
       {\
           printf("%d*%d=%d ", i, j, i * j);\
       }\
       printf("\n");\
    }


int main()
{
    int int_Num1, int_Num2;

    scanf("%d %d", &int_Num1, &int_Num2);

    multiplication_table(int_Num1, int_Num2);

    return 0;
}
