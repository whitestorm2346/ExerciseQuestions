#include <stdio.h>

int F(int int_Num, int *intptr_Count)
{
    (*intptr_Count)++;

    if(int_Num == 0 || int_Num == 1) return int_Num;
    else return F(int_Num - 1, intptr_Count) + F(int_Num - 2, intptr_Count);
}

int main()
{
    int int_Num, int_CallTimes = 0;

    printf("費式數列第幾項: ");
    scanf("%d", &int_Num);

    printf("Ans: %d\n", F(int_Num, &int_CallTimes));
    printf("Call function times: %d", int_CallTimes);

    return 0;
}
