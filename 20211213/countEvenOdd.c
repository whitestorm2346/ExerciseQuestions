#include <stdio.h>

void countEvenOdd(int, int*, int*);

int main()
{
    int num, odd = 0, even = 0;

    scanf("%d", &num);

    countEvenOdd(num, &odd, &even);

    printf("\nodd digits: %d\neven digits: %d", odd, even);

    return 0;
}

void countEvenOdd(int num, int *odd, int *even)
{
    (num % 2) ? ((*odd)++) : ((*even)++);

    if(num / 10) return countEvenOdd(num / 10, odd, even);
}
