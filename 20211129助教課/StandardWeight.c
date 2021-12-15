#include <stdio.h>

void prtResult(float);

int main()
{
    int gender, height;
    float weight;

    do
    {
        printf("gender: (1)Male (2)Female\n");
        scanf("%d", &gender);
    }
    while(gender != 1 && gender != 2);

    printf("Input your height: ");
    scanf("%d", &height);

    if(gender == 1) weight = (height - 80) * 0.7;
    else weight = (height - 70) * 0.6;

    prtResult(weight);

    return 0;
}

void prtResult(float weight)
{
    printf("Your standard weight is %f", weight);
}
