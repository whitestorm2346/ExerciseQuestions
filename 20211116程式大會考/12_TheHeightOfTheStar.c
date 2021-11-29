// ID:410411218 name:¥ÂÃ ≥‘ class:1A
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int int_Count = 0, int_Max = -1;
    int intarr_Height[100];

    for(int int_Input; scanf("%d", &int_Input) != EOF;)
    {
        intarr_Height[int_Count++] = int_Input;

        if(int_Input > int_Max) int_Max = int_Input;
    }

    char **line = malloc(int_Max * sizeof(char*));

    for(int i = 0; i < int_Max; i++)
    {
        *(line + i) = malloc((int_Count + 1) * sizeof(char));
    }

    for(int i = int_Max - 1; i >= 0; i--)
    {
        for(int j = 0; j < int_Count; j++)
        {
            if(intarr_Height[j] > 0)
            {
                intarr_Height[j]--;
                *(*(line + i) + j) = '*';
            }
            else *(*(line + i) + j) = ' ';
        }

        *(*(line + i) + int_Count) = '\0';
    }

    for(int i = 0; i < int_Max; i++)
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
