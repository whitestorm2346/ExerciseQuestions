#include <stdio.h>

int main()
{
    int num;

    scanf("%d", &num);
    printf("%d = ", num);

    for(int i = 2; num > 1;)
    {
        if(num % i == 0)
        {
            printf("%dx", i);

            num /= i;
        }
        else i++;
    }

    printf("\b ");

    return 0;
}
