#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
    char command[25] = "shutdown -s -t ";
    char second[20];
    int hr, min, sec, total_sec;
    time_t now = time(0);
    struct tm *settime = localtime(&now);

    printf("Input the time you want to shutdown(hh:mm:ss): ");
    scanf("%d:%d:%d", &hr, &min, &sec);

    settime->tm_hour = hr;
    settime->tm_min = min;
    settime->tm_sec = sec;

    total_sec = (int)difftime(mktime(settime), now);

    if(total_sec < 0) printf("The time is already expired!");
    else{
        sprintf(second, "%d", total_sec);
        strcat(command, second);
        system(command);

        printf("Shutdown at %d:%d:%d", hr, min, sec);
    }

    return 0;
}
