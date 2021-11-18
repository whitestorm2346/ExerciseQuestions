#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    char command[25] = "shutdown -s -t ";
    char second[20];
    int int_Hour, int_Minute, int_Second, int_Gap_sec;
    time_t now = time(0);
    struct tm *settime = localtime(&now);

    printf("Input the time you want to shutdown(hh:mm:ss): ");
    scanf("%d:%d:%d", &int_Hour, &int_Minute, &int_Second);

    settime->tm_hour = int_Hour;
    settime->tm_min = int_Minute;
    settime->tm_sec = int_Second;

    int_Gap_sec = (int)difftime(mktime(settime), now);

    if(int_Gap_sec < 0) printf("The time is already expired!");
    else
    {
        sprintf(second, "%d", int_Gap_sec);
        strcat(command, second);
        system(command);

        printf("Shutdown at %d:%d:%d", int_Hour, int_Minute, int_Second);
    }

    return 0;
}
