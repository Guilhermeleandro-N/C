
#include <stdio.h>

int main()
{
    int x,y;
    int *ptx,*pty;
    printf("x:\n");
    scanf("%d",&x);
    printf("y:\n");
    scanf("%d",&y);
    ptx=&x;
    pty=&y;
    *ptx=*ptx+*pty;
    *pty=*ptx-*pty;
    *ptx=*ptx-*pty;
    printf("x:%d \ny:%d ",x,y);
    return 0;
}
