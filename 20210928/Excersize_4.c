#include <stdio.h>

int main()
{
    int x1, x2, x3, x4;

    scanf("%d %f %c %s", &x1, &x2, &x3, &x4);
    printf("%d %f %c %s", x1, (float)x2, (char)x3, (char*)x4);

	return 0;
}
