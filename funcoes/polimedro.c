

#include <stdio.h>
#include <string.h>
int main(){
    int n,boleano=1;
    char frase[128];
    printf("Sou um verificador de palindromos\nEscreva um sentenca que direi se é um palinmero ou nao!\n");
    scanf(" %[^\n]", frase);
    n=strlen(frase)-1;
    for (int c=0;c<n;c++){
        if(!(frase[c]==frase[n])){
            boleano=0;
        }
        n-=1;
    }
    if(boleano==0){
        printf("Nao é polimedromo");
    }else {
        printf("E polimedro");
    }

    return 0;
}
