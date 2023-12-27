
#include <stdio.h>
int resultado(int n);

int main()
{
    int n,boleano;
    scanf("%d",&n);
    boleano=resultado(n);
    if (boleano==1){
        printf("Nao é primo.\n");
    } else{
        printf("Primo.\n");
    }
}
int resultado(int n){
    int cont,boleano;
    for(int c=1;c<n;c++){
        if(n%c==0){
            cont+=1;
        }
    }
if(cont>1){
   boleano=1; 
   //1 nao e primo
}
return boleano;
}
