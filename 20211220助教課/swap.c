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

    printf("�洫�H�ea = %d, b = %d\n", num1, num2);

    swap(&num1, &num2);

    printf("�洫�H��a = %d, b = %d\n", num1, num2);

    return 0;
}
