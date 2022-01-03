#include <stdio.h>

void countDigits(int, int*);

int main()
{
    int num;
    int count = 1;

    scanf("%d", &num);

    countDigits(num, &count);

    printf("numlen: %d", count);

    return 0;
}

void countDigits(int num, int *count)
{
    if(num == 0) printf("%d\n", num);
    else if(num / 10 == 0) printf("%d\n", num);
    else
    {
        printf("%d", num % 10);
        (*count)++;

        return countDigits(num / 10, count);
    }
}
