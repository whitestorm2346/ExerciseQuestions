#include <stdio.h>

/*
lock:
    [+5][+5][+5][+5]
    [%10][%10][%10][%10]
    swap(1, 3); swap(2, 4)
*/

void swap(int*, int*);
void setCode(int, int*);

int main()
{
    int num;

    scanf("%d", &num);

    printf("code: %d\n", num);

    setCode(0, &num);

    printf("decode: %d\n", num);

    setCode(1, &num);

    printf("code: %d\n", num);

    return 0;
}

void swap(int *num1, int *num2)
{
    int temp = *num1;

    *num1 = *num2;
    *num2 = temp;
}
void setCode(int method, int *num)
{
    int code[4];

    for(int i = 0; i < 4; i++, *num /= 10)
    {
        code[i] = *num % 10;
    }

    if(method == 0)
    {
        for(int i = 0; i < 4; i++)
        {
            code[i] = (code[i] + 5) % 10;
        }

        swap(&code[0], &code[2]);
        swap(&code[1], &code[3]);
    }
    else if(method == 1)
    {
        swap(&code[0], &code[2]);
        swap(&code[1], &code[3]);

        for(int i = 0; i < 4; i++)
        {
            code[i] = (code[i] + 5) % 10;
        }
    }

    *num = 0;

    for(int i = 0, base = 1; i < 4; i++, base *= 10)
    {
        *num += code[i] * base;
    }
}
