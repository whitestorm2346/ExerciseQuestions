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

        printf("�ü�%d: %d\n", i + 1, rnum[i]);
    }

    printf("���ͥX�Ӫ��}�C����1: a[%d][%d]\n", rnum[0], rnum[1]);
    printf("���ͥX�Ӫ��}�C����2: a[%d][%d]\n", rnum[2], rnum[3]);

    int *ptr1 = &arr[rnum[0]][rnum[1]];
    int *ptr2 = &arr[rnum[2]][rnum[3]];

    printf("ptr1: %p\n", ptr1);
    printf("ptr2: %p\n", ptr2);

    printf("a[%d][%d]~a[%d][%d]�������Ӽ�: %d\n",
           rnum[0], rnum[1], rnum[2], rnum[3], abs(ptr2 - ptr1));

    printf("a[%d][%d]~a[%d][%d]���O����϶��j�p: %d\n",
           rnum[0], rnum[1], rnum[2], rnum[3], abs(ptr2 - ptr1) * 4);

    return 0;
}
