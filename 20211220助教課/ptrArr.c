#include <stdio.h>

int main()
{
    float temperature[12];
    float *ptr = temperature;
    float sum = 0;

    for(int i = 0; i < 12; i++)
    {
        printf("%d�몺�����ū�: ", i + 1);
        scanf("%f", ptr + i);

        sum += *(ptr + i);
    }

    printf("\n�~�����ū׬�: %f\n", sum / 12);

    return 0;
}
