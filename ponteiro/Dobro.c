
#include <stdio.h>

int main()
{
    float x,*ptx;
    scanf("%f", &x);
    ptx=&x;
    *ptx *=2;
    printf("%f", *ptx);
}

