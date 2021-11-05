#include <stdio.h>

int main()
{
    int int_Egg = 40, int_Milk = 80, int_Toast = 30, int_Bacon = 100;
    int int_EggCount, int_MilkCount, int_ToastCount, int_BaconCount;

    printf("請問要買幾盒雞蛋?: ");
    scanf("%d", &int_EggCount);

    printf("請問要買幾罐牛奶?: ");
    scanf("%d", &int_MilkCount);

    printf("請問要買幾條吐司?: ");
    scanf("%d", &int_ToastCount);

    printf("請問要買幾包培根?: ");
    scanf("%d", &int_BaconCount);

    printf("購買%d盒雞蛋、%d罐牛奶、%d條吐司、%d包培根的總金額為: %d",
           int_EggCount, int_MilkCount, int_ToastCount, int_BaconCount,
           int_Egg * int_EggCount + int_Milk * int_MilkCount + int_Toast * int_ToastCount + int_Bacon * int_BaconCount);

    return 0;
}
