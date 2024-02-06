#include <stdio.h>
#include <string.h>

int main()
{
    int comprimento;
    char frase[100], novafrase[100];
    fgets(frase,100,stdin);
    comprimento=strlen(frase);
    for(int c=0;c<comprimento;c++){
        if (!(frase[c]==97 || frase[c]==101 || frase[c]==105 || frase[c]==111 || frase[c]==117 || frase[c]==65 || frase[c]==69 ||frase[c]==73 || frase[c]==79 || frase[c]==85)){
          novafrase[c]=frase[c];
        }else{
            novafrase[c]=32;
        }
    }
    printf("Nova frase: %s",novafrase);
}
