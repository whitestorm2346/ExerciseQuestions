#include <stdio.h>

int main()
{
    int int_Num;

    scanf("%d", &int_Num);

    for(int i = 1, j = 0, k = 1; i <= int_Num; i++)
    {
        printf("%d ", i);

        if(++j % k == 0)
        {
            k++;
            j = 0;

            printf("\n");
        }
    }

    return 0;
}
