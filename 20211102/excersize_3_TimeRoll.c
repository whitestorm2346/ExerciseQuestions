#include <stdio.h>
#include <stdlib.h>

void swap(int* int_Num1, int* int_Num2)
{
    int int_Temp = *int_Num2;

    *int_Num2 = *int_Num1;
    *int_Num1 = int_Temp;
}

int main()
{
    int poker[52], roll, timesRoll = 0;

    srand(time(NULL));

    for(int i = 0; i < 52; i++)
    {
        poker[i] = i;
    }

    for(int i = 0; i < 51; i++)
    {
        roll = rand() % (52 - i) + i;
        timesRoll++;

        swap(&poker[i], &poker[roll]);
    }

    for(int i = 0; i < 52; i++)
    {
        switch(poker[i] / 13)
        {
            case 0: printf("S: "); break;
            case 1: printf("H: "); break;
            case 2: printf("D: "); break;
            case 3: printf("C: "); break;
            default: printf("error....\n"); exit(1);
        }

        switch(poker[i] % 13 + 1)
        {
            case 1: printf("A\n"); break;
            case 2 ... 10: printf("%d\n", poker[i] % 13 + 1); break;
            case 11: printf("J\n"); break;
            case 12: printf("Q\n"); break;
            case 13: printf("K\n"); break;
            default: printf("error....\n"); exit(1);
        }
    }

    printf("roll %d times\n", timesRoll);

    return 0;
}
