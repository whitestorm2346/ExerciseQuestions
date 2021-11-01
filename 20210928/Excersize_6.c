#include <stdio.h>

int main()
{
    int x1;
    float x2;
    char x3;
    char x4[20];

    scanf("%d %f %c %s", &x1, &x2, &x3, x4);
    printf("%d %d %d %d", x1, (int)x2, (int)x3, (int)x4);

	return 0;
}
