#include <stdio.h>
int fatorial(int n);
int main() {
 
    int n,r;
    scanf("%d",&n);
    r=fatorial(n);
    printf("%d\n",r);
    return 0;
}
int fatorial(int n){
    int r;
    r=n;
    for(n=n-1;n>1;--n){
        r=r*n;
    }
    return r;
}