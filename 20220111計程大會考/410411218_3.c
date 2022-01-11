// ID:410411218 name:Yu,Tse-Hsun class:1A
#include <stdio.h>
#include <stdlib.h>

int Pick_Even_Numbers(int data[], int even_data[], int size)
{
    int count = 0;

    for(int i = 0; i < size; i++)
    {
        if(data[i] % 2 == 0) even_data[count++] = data[i];
    }

    return count;
}

int main()
{
    int size;

    scanf("%d", &size);

    int *data = (int*)malloc(sizeof(int) * size);
    int *even_data = (int*)malloc(sizeof(int) * size);

    for(int i = 0; i < size; i++)
    {
        scanf("%d", &data[i]);
    }

    int count = Pick_Even_Numbers(data, even_data, size);

    printf("偶數個數%d個，", count);

    for(int i = 0; i < count; i++)
    {
        if(i != count - 1) printf("%d,", even_data[i]);
        else printf("%d", even_data[i]);
    }

    free(data);
    free(even_data);

    return 0;
}
