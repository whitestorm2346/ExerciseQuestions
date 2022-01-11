// ID:410411218 name:Yu,Tse-Hsun class:1A
#include <stdio.h>
#include <math.h>

int isPrime(int n, int curr)
{
    if(curr > sqrt((double)n)) return 1;
    else if(n % curr == 0) return 0;
    else return isPrime(n, curr + 1);
}
void Two2N_Prime(int n)
{
    if(n < 2) return;

    Two2N_Prime(n - 1);

    if(isPrime(n, 2)) printf("%d ", n);
}

int main()
{
    int n;

    scanf("%d", &n);

    Two2N_Prime(n);

    return 0;
}
