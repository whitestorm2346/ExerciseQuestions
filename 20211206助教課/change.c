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
        printf("選擇(1)公斤轉英磅，(2)英磅轉公斤\n");
        scanf("%d", &int_Ans2);

        printf("請輸入數字\n");
        scanf("%d", &int_Num);

        if(int_Ans2 == 1) printf("等於 %f 英磅\n", (float)int_Num / WEIGHT);
        else if(int_Ans2 == 2) printf("等於 %f 公斤\n", (float)int_Num * WEIGHT);
    }
    else
    {
        printf("選擇(1)公尺轉英呎，(2)英呎轉公尺\n");
        scanf("%d", &int_Ans2);

        printf("請輸入數字\n");
        scanf("%d", &int_Num);

        if(int_Ans2 == 1) printf("等於 %f 英呎\n", (float)int_Num / LENGTH);
        else if(int_Ans2 == 2) printf("等於 %f 公尺\n", (float)int_Num * LENGTH);
    }
}
