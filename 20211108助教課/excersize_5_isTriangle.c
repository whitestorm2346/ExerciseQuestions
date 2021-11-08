#include <stdio.h>

int main()
{
    int int_Edge1, int_Edge2, int_Edge3;

    printf("Input the length of three edges(x y z): ");
    scanf("%d %d %d", &int_Edge1, &int_Edge2, &int_Edge3);

    if(int_Edge1 + int_Edge2 > int_Edge3 &&
       int_Edge1 + int_Edge3 > int_Edge2 &&
       int_Edge2 + int_Edge3 > int_Edge1) printf("yes");
    else printf("no");

    return 0;
}
