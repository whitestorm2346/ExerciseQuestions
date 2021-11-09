#include <stdio.h>

_Bool fn_IsLeap(int year)
{
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 1);
}
int fn_DayGap(int year, int month, int day);

int main()
{
    int int_Year, int_Month, int_Day;

    scanf("%d %d %d", &int_Year, &int_Month, &int_Day);

    printf("%d", fn_DayGap(int_Year, int_Month, int_Day));

    return 0;
}

int fn_DayGap(int year, int month, int day)
{
    int result = 0;

    switch(month - 1)
    {
        case 11: result += 30;
        case 10: result += 31;
        case  9: result += 30;
        case  8: result += 31;
        case  7: result += 31;
        case  6: result += 30;
        case  5: result += 31;
        case  4: result += 30;
        case  3: result += 31;
        case  2: result += (fn_IsLeap(year)) ? 29 : 28;
        case  1: result += 31;
    }

    result += day;

    return result;
}
