#include <stdio.h>
#include <stdlib.h>

int main()
{
    int int_Max = -1;
    int intarr_Height[5];

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &intarr_Height[i]);

        if(intarr_Height[i] > int_Max) int_Max = intarr_Height[i];
    }

    char **line = (char**)malloc(int_Max * sizeof(char*));

    for(int i = 0; i < int_Max; i++)
    {
        *(line + i) = (char*)malloc(5 * sizeof(char));
    }

    for(int i = int_Max - 1; i >= 0; i--)
    {
        for(int j = 0; j < 5; j++)
        {
            if(intarr_Height[j] > 0)
            {
                intarr_Height[j]--;
                *(*(line + i) + j) = '*';
            }
            else *(*(line + i) + j) = ' ';
        }

        *(*(line + i) + 5) = '\0';
    }

    for(int i = int_Max - 1; i >= 0; i--)
    {
        printf("%s\n", *(line + i));
    }

    for(int i = 0; i < int_Max; i++)
    {
        free(*(line + i));
    }

    free(line);

    return 0;
}
