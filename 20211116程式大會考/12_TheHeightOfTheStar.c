// ID:410411218 name:´åÌÊ³Ô class:1A
#include <stdio.h>

int main()
{
    int int_Count = 0, int_Max = -1;
    int intarr_Height[100];

    for(int int_Input; scanf("%d", &int_Input) != EOF;)
    {
        intarr_Height[int_Count++] = int_Input;

        if(int_Input > int_Max) int_Max = int_Input;
    }

    char line[int_Max][int_Count + 1];

    for(int i = int_Max - 1; i >= 0; i--)
    {
        for(int j = 0; j < int_Count; j++)
        {
            if(intarr_Height[j] > 0)
            {
                intarr_Height[j]--;
                line[i][j] = '*';
            }
            else line[i][j] = ' ';
        }

        line[i][int_Count] = '\0';
    }

    for(int i = 0; i < int_Max; i++)
    {
        printf("%s\n", line[i]);
    }

    return 0;
}
