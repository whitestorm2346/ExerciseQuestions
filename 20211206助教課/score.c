#include <stdio.h>

void fn_Score(int);

int main()
{
    int int_TestCount;

    printf("�п�J�n�p�⪺��ؼ�\n");
    scanf("%d", &int_TestCount);

    fn_Score(int_TestCount);

    return 0;
}

void fn_Score(int int_TestCount)
{
    int int_Sum = 0;
    float flt_Avg;

    for(int i = 0, int_Input; i < int_TestCount; i++)
    {
        printf("�п�J��%d�쪺���Z:\n", i + 1);
        scanf("%d", &int_Input);

        int_Sum += int_Input;
    }

    flt_Avg = (float)int_Sum / int_TestCount;

    printf("�z���`���O�G%d\n", int_Sum);
    printf("�z�������O�G%.2f\n", flt_Avg);

    if(flt_Avg >= 90) printf("���y�G�ӴΤF\n");
    else if(flt_Avg >= 70) printf("���y�G�g\n");
    else printf("���y�G�[�o\n");
}
