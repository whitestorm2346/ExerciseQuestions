#include <stdio.h>

#define WEIGHT 0.454
#define LENGTH 0.3048

int select1(void);
void fn_Change(int);

int main()
{
    int int_Ans1, int_Ans2, int_Num;

    int_Ans1 = select1();

    fn_Change(int_Ans1);

    return 0;
}

int select1(void)
{
    int int_Ans;

    do
    {
        printf("1.Weight\n2.Length\n");
        scanf("%d", &int_Ans);
    }
    while(int_Ans != 1 && int_Ans != 2);

    return int_Ans;
}
void fn_Change(int int_Ans1)
{
    if(int_Ans1 == 1)
    {
        printf("���(1)������^�S�A(2)�^�S�ऽ��\n");
        scanf("%d", &int_Ans2);

        printf("�п�J�Ʀr\n");
        scanf("%d", &int_Num);

        if(int_Ans2 == 1) printf("���� %f �^�S\n", (float)int_Num / WEIGHT);
        else if(int_Ans2 == 2) printf("���� %f ����\n", (float)int_Num * WEIGHT);
    }
    else
    {
        printf("���(1)������^�`�A(2)�^�`�ऽ��\n");
        scanf("%d", &int_Ans2);

        printf("�п�J�Ʀr\n");
        scanf("%d", &int_Num);

        if(int_Ans2 == 1) printf("���� %f �^�`\n", (float)int_Num / LENGTH);
        else if(int_Ans2 == 2) printf("���� %f ����\n", (float)int_Num * LENGTH);
    }
}
