#include <stdio.h>

int main()
{
    int sum = 0;

    for(int i = 1; i <= 10; i++)
    {
        int curr = 1;

        for(int j = 1; j <= i; j++)
        {
            curr *= j;
        }

        sum += curr;
    }

    printf("%d", sum);

    return 0;
}
