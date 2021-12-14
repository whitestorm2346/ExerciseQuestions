#include <stdio.h>

int BinaryToDecimal(int);
int DecimalToBinary(int);

int main()
{
    int num_2, num_10;

    printf("Input a binary integer: ");
    scanf("%d", &num_2);
    printf("2 to 10: %d\n", BinaryToDecimal(num_2));

    printf("Input a decimal integer: ");
    scanf("%d", &num_10);
    printf("10 to 2: %d\n", DecimalToBinary(num_10));

    return 0;
}

int BinaryToDecimal(int num)
{
    if(num) return (num % 10) + 2 * BinaryToDecimal(num / 10);
    else return 0;
}
int DecimalToBinary(int num)
{
    if(num) return (num % 2) + 10 * DecimalToBinary(num / 2);
    else return 0;
}
