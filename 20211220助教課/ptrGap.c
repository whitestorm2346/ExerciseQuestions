#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int arr[5][8];
    int rnum[4];

    for(int i = 0; i < 4; i++)
    {
        if(i % 2) rnum[i] = rand() % 8;
        else rnum[i] = rand() % 5;

        printf("亂數%d: %d\n", i + 1, rnum[i]);
    }

    printf("產生出來的陣列元素1: a[%d][%d]\n", rnum[0], rnum[1]);
    printf("產生出來的陣列元素2: a[%d][%d]\n", rnum[2], rnum[3]);

    int *ptr1 = &arr[rnum[0]][rnum[1]];
    int *ptr2 = &arr[rnum[2]][rnum[3]];

    printf("ptr1: %p\n", ptr1);
    printf("ptr2: %p\n", ptr2);

    printf("a[%d][%d]~a[%d][%d]的元素個數: %d\n",
           rnum[0], rnum[1], rnum[2], rnum[3], abs(ptr2 - ptr1));

    printf("a[%d][%d]~a[%d][%d]的記憶體區塊大小: %d\n",
           rnum[0], rnum[1], rnum[2], rnum[3], abs(ptr2 - ptr1) * 4);

    return 0;
}
