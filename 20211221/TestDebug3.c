#include <stdio.h>

void Uppercase(char[]);

int main()
{
    char str[80];

    printf("Enter a string: ");
    scanf("%s", str);

    Uppercase(str);

    printf("%s", str);

    return 0;
}

void Uppercase(char msg[])
{
    for(int i = 0; msg[i] != '\0'; i++)
    {
        if(msg[i] >= 'a' && msg[i] <= 'z')
        {
            msg[i] = msg[i] - 32;
        }
    }
}
