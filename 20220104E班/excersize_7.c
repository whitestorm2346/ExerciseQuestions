#include <stdio.h>

int main()
{
    int height[5];

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &height[i]);
    }

    int max = -1;

    for(int i = 0; i < 5; i++)
    {
        if(height[i] > max) max = height[i];
    }

    for(int i = 0; i < max; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(height[j])
            {
                printf("*");

                height[j]--;
            }
            else printf(" ");
        }

        printf("\n");
    }

    return 0;
}
