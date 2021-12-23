#include <stdio.h>

void swap(int* num1, int* num2)
{
    int temp = *num1;

    *num1 = *num2;
    *num2 = temp;
}

int main()
{
    int num1 = 34, num2 = 21;

    printf("交換以前a = %d, b = %d\n", num1, num2);

    swap(&num1, &num2);

    printf("交換以後a = %d, b = %d\n", num1, num2);

    return 0;
}
