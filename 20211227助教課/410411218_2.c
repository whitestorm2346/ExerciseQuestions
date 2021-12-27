// name: Yu, Tse-Hsun class: 1A ID: 410411218
#include <stdio.h>
#include <string.h>

_Bool isPalindrome(char str[], int length)
{
    for(int i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length - i - 1]) return 0;
    }

    return 1;
}

int main()
{
    char str[100];

    scanf("%s", str);

    if(isPalindrome(str, strlen(str))) printf("�ۦP");
    else printf("���ۦP");

    return 0;
}
