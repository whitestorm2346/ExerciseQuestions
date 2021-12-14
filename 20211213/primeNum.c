#include <stdio.h>
#include <math.h>

_Bool isPrimeNum(const int num, int curr, const int limit)
{
    if(curr > limit) return 1;

    if(num % curr == 0) return 0;
    else return isPrimeNum(num, curr + 1, limit);
}
void primeNum_2toN(int num)
{
    if(num >= 2) primeNum_2toN(num - 1);
    else return;

    if(isPrimeNum(num, 2, sqrt(num))) printf("%d ", num);
}

int main()
{
    int num;

    scanf("%d", &num);

    printf("prime numbers 2-%d: ", num);
    primeNum_2toN(num);

    return 0;
}
