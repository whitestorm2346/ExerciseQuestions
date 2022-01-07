#include <stdio.h>

int main()
{
    int arr[9] = {1, 1, 2, 2, 2, 2, 3, 3, 4};
    int curr = 1, save = 0;

    for(; curr < 9; curr++)
    {
        if(arr[curr] == arr[save]) curr++;
        else arr[++save] = arr[curr];
    }

    arr[++save] = arr[curr - 1];
    save++;

    for(; save < 9; save++)
    {
        arr[save] = 0;
    }

    for(int i = 0; i < 9; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
