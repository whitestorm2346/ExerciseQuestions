#include <stdio.h>

int main()
{
    const int arr[4] = {2, 7, 11, 5};
    int find;
    _Bool isFound = 0;

    scanf("%d", &find);

    for(int i = 0; i < 4; i++)
    {
        for(int j = i + 1; j < 4; j++)
        {
            if(arr[i] + arr[j] == find)
            {
                printf("%d,%d", i + 1, j + 1);

                isFound = 1;
            }
        }
    }

    if(!isFound) printf("-1");

    return 0;
}
