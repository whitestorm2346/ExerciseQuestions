#include <stdio.h>

void countChar(char*, int*, int*, int*, int*);

int main()
{
    char str[1000];
    int alphabet = 0, space = 0, digit = 0, other = 0;

    scanf("%[^\n]%*c", str);

    countChar(str, &alphabet, &space, &digit, &other);

    printf("alphabet: %d\n", alphabet);
    printf("space: %d\n", space);
    printf("digit: %d\n", digit);
    printf("other: %d\n", other);

    return 0;
}

void countChar(char *str, int *alphabet, int *space, int *digit, int *other)
{
    for(char *ptr = str; *ptr != '\0'; ++ptr)
    {
        if(('a' <= *ptr && 'z' >= *ptr) ||
           ('A' <= *ptr && 'Z' >= *ptr)) (*alphabet)++;
        else if(*ptr == ' ') (*space)++;
        else if('0' <= *ptr && '9' >= *ptr) (*digit)++;
        else (*other)++;
    }
}
