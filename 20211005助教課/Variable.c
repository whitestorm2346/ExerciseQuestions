#include <stdio.h>

int main()
{
    int int_Age;        // int int_Age = 18;
    double db_Height;   // double db_Height = 170.1;
    double db_Weight;   // double db_Weight = 56.2;

    scanf("%d %lf %lf", &int_Age, &db_Height, &db_Weight); // 有初始化就可以不用進行input

    printf("Age = %d\n", int_Age);
    printf("Height = %f\n", db_Height);
    printf("Weight = %f\n", db_Weight);

    return 0;
}
