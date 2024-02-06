
#include <stdio.h>
void inverter(int *ptx);
int main()
{
    int x, *ptx;
    scanf("%d",&x);
    ptx=&x;
    inverter(ptx);
    printf("%d",x);
}

void inverter(int *ptx){
    int div10,mod10;
    div10=*ptx/10;
    mod10=*ptx%10;
    *ptx=mod10*10+div10;
}