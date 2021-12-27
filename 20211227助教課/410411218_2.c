// name: Yu, Tse-Hsun class: 1A ID: 410411218
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    scanf("%s", str);

    _Bool isPalindrome = 1;

    for(int i = 0; i < strlen(str) / 2; i++)
    {
        if(str[i] != str[strlen(str) - i - 1])
        {
            isPalindrome = 0;

            break;
        }
    }

    if(isPalindrome) printf("相同");
    else printf("不相同");

    return 0;
}
