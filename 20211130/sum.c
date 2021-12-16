#include <stdio.h>

int sum(int);

int main()
{
    int num;

    printf("計算 1~n 的和，請輸入 n 的值\n");
    scanf("%d", &num);
    printf("sum = %d", sum(num));

    return 0;
}

int sum(int num)
{
    if(num <= 0) return 0;

    return num + sum(num - 1);
}
