#include <stdio.h>

int main()
{
    double db_Height_cm, db_Weight_kg;

    printf("Input your height.(cm): ");
    scanf("%lf", &db_Height_cm);

    db_Height_cm /= 100;

    printf("Input your weight.(kg): ");
    scanf("%lf", &db_Weight_kg);

    double db_BMI = db_Weight_kg / (db_Height_cm * db_Height_cm);

    if(db_BMI < 18.5) printf("�魫�L��");
    else if(18.5 <= db_BMI && db_BMI < 24.0) printf("���d���");
    else if(24 <= db_BMI && db_BMI < 27.0) printf("�L��");
    else if(27 <= db_BMI && db_BMI < 30.0) printf("���תέD");
    else if(30 <= db_BMI && db_BMI < 35.0) printf("���תέD");
    else if(db_BMI >= 35.0) printf("���תέD");

    return 0;
}
