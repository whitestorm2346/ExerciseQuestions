#include <stdio.h>

void ClearStr(char**);

int main()
{
    char *str1 = "Hello World!";

    printf("Origin str: %s\n", str1);

    ClearStr(&str1);

    printf("Result str: %s\n", str1);

    return 0;
}

void ClearStr(char **str_ptr)
{
    *str_ptr = "";
}
