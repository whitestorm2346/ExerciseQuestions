#include <stdio.h>

int main()
{
    const int arr[4] = {1, 2, 3, 4};

    for(int i = 0; i < 4; i++)
    {
        for(int j = i + 1; j < 4; j++)
        {
            for(int k = j + 1; k < 4; k++)
            {
                printf("%d %d %d\n", arr[i], arr[j], arr[k]);
            }
        }
    }

    return 0;
}
