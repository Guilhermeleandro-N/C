#include <stdio.h>
void troca(int*a, int*b, int*c);

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    troca(&a,&b,&c);
    printf("%d %d %d", a,b,c);
    return 0;
}

void troca(int*a, int*b, int*c){
    int aux;
    if(*a>*c && *c>*b){
        aux=*b;
        *b=*c;
        *c=aux;
    }else if(*b>*a && *a>*c){
        aux=*b;
        *b=*a;
        *a=aux;
    }else if(*b>*c && *c>*a){ 
        aux=*b;
        *b=*a;
        *a=aux;
        aux=*b;
        *b=*c;
        *c=aux;
    }else if(*c>*a && *a>*b){
        aux=*c;
        *c=*a;
        *a=aux;
        aux=*c;
        *c=*b;
        *b=aux;
    }else if(*c>*b && *b>*a){
        aux=*c;
        *c=*a;
        *a=aux;
    }
    
}