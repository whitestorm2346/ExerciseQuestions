#include <stdio.h>

int main()
{
    for(int int_Input;;)
    {
        scanf("%d", &int_Input);

        if(int_Input == -1) break;

        switch(int_Input)
        {
            case 90 ... 100: printf("��\n"); break;
            case 80 ... 89: printf("�A\n"); break;
            case 70 ... 79: printf("��\n"); break;
            case 60 ... 69: printf("�B\n"); break;
            default: printf("��\n");
        }
    }

    return 0;
}
