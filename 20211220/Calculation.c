#include <stdio.h>

void Calculation(int, int, int, int*, float*);

int main()
{
    int num1, num2, num3;
    int sum = 0;
    float avg = 0;

    printf("Input three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    Calculation(num1, num2, num3, &sum, &avg);

    printf("%d+%d+%d = %d\n", num1, num2, num3, sum);
    printf("average(%d+%d+%d) = %f\n", num1, num2, num3, avg);

    return 0;
}

void Calculation(int num1, int num2, int num3, int* ptr_sum, float* ptr_avg)
{
    *ptr_sum = num1 + num2 + num3;
    *ptr_avg = *ptr_sum / 3.0;
}
