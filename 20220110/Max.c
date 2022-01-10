#include <stdio.h>
#include <stdlib.h>

int Max(int, int, int);
int Max(int x, int y, int z){
    if(x > y)
    {
        if(x > z)
            return x;
        else
            return z;
    }
    else
    {
        if(y > z)
            return y;
        else
            return z;
    }
}
int main(){
    int a, b, c;
    int maxValue;

    printf("input three numbers:\n");
    scanf("%d,%d,%d", &a,&b,&c);

    maxValue = Max(a,b,c);

    printf("max number of %d,%d and %d is %d\n",a,b,c,maxValue);

    return 0;
}
