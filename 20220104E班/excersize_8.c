#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_5;
    int isPalindromeNum = 1;

    scanf("%d", &num_5);

    if(num_5 % 10 != num_5 / 10000) isPalindromeNum = 0;

    if((num_5 % 100) / 10 != (num_5 % 10000) / 1000) isPalindromeNum = 0;

    if(isPalindromeNum) printf("%d is a palindrome number", num_5);
    else printf("%d is not a palindrome number", num_5);

    return 0;
}
