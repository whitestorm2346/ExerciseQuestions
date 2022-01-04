// ID:410411218 name:Yu,Tse-Hsun class:1A
#include <stdio.h>

void swap(int*, int*);
int setCode(int);

int main()
{
    int num;

    scanf("%d", &num);
    printf("%d", setCode(num));

    return 0;
}

void swap(int *num1, int *num2)
{
    int temp = *num1;

    *num1 = *num2;
    *num2 = temp;
}
int setCode(int num)
{
    int code[4];
    int result = 0;

    for(int i = 0; i < 4; i++, num /= 10)
    {
        code[i] = num % 10;
    }

    for(int i = 0; i < 4; i++)
    {
        code[i] = (code[i] + 2) % 4;
    }

    swap(&code[0], &code[2]);
    swap(&code[1], &code[3]);

    for(int i = 0, base = 1; i < 4; i++, base *= 10)
    {
        result += code[i] * base;
    }

    return result;
}
