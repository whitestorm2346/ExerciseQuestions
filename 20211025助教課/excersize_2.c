#include <stdio.h>

int main()
{
    int int_Sum = 0;
    int int_N;

    scanf("%d", &int_N);

    for(int i = 1; i < int_N; i++)
    {
        printf("(%d + %d) + ", i, 2 * i);

        int_Sum += i + 2 * i;
    }

    printf("(%d + %d) = ", int_N, 2 * int_N);

    int_Sum += int_N + 2 * int_N;

    printf("%d", int_Sum);

    return 0;
}
