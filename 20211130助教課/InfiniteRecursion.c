#include <stdio.h>

void InfiniteRecursion()
{
    printf("Infinite Recursion\n");

    InfiniteRecursion();
}

int main()
{
    InfiniteRecursion();

    return 0;
}
