#include <stdio.h>

int main()
{
    int sec, min, hr;

    scanf("%d", &sec);

    min = sec / 60;
    sec %= 60;

    hr = min / 60;
    min %= 60;

    printf("%d:%d:%d", hr, min, sec);

    return 0;
}
