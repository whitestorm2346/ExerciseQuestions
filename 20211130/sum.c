#include <stdio.h>

int sum(int);

int main()
{
    int num;

    printf("�p�� 1~n ���M�A�п�J n ����\n");
    scanf("%d", &num);
    printf("sum = %d", sum(num));

    return 0;
}

int sum(int num)
{
    if(num <= 0) return 0;

    return num + sum(num - 1);
}
