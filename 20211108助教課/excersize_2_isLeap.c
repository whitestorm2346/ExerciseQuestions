#include <stdio.h>

int main()
{
    int int_Year;

    printf("����~: ");
    scanf("%d", &int_Year);

    int_Year += 1911;

    if((int_Year % 400 == 0) || (int_Year % 4 == 0 && int_Year % 100 != 0)) printf("�O�|�~");
    else printf("���O�|�~");

    return 0;
}
