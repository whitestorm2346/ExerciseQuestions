#include <stdio.h>

int countDigits(int num)
{
    if(num / 10 == 0) return 1;
    else return 1 + countDigits(num / 10);
}

int main()
{
    int num;

    scanf("%d", &num);
    printf("%d digitals\n", countDigits(num));

    return 0;
}
