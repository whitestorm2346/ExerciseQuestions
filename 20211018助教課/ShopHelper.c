#include <stdio.h>

int main()
{
    int int_Egg = 40, int_Milk = 80, int_Toast = 30, int_Bacon = 100;
    int int_EggCount, int_MilkCount, int_ToastCount, int_BaconCount;

    printf("�аݭn�R�X�����J?: ");
    scanf("%d", &int_EggCount);

    printf("�аݭn�R�X������?: ");
    scanf("%d", &int_MilkCount);

    printf("�аݭn�R�X���R�q?: ");
    scanf("%d", &int_ToastCount);

    printf("�аݭn�R�X�]����?: ");
    scanf("%d", &int_BaconCount);

    printf("�ʶR%d�����J�B%d�������B%d���R�q�B%d�]���ڪ��`���B��: %d",
           int_EggCount, int_MilkCount, int_ToastCount, int_BaconCount,
           int_Egg * int_EggCount + int_Milk * int_MilkCount + int_Toast * int_ToastCount + int_Bacon * int_BaconCount);

    return 0;
}
