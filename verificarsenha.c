
#include <stdio.h>
#include <string.h>
int main()
{
    char senha[50];
    int numcar,bole1,bole2,bole3,bole4,bole5;
    fgets(senha, sizeof(senha), stdin);
    //8 caracteres
   
        if(strlen(senha)>=8){
            bole1=1;
        }
    //Letra minuscula
    for(int c=0;c<strlen(senha);c++){
        if(senha[c]>96 && senha[c]<123){
            bole2=1;
        }
    }
    //maiusculo 
    for(int c=0;c<strlen(senha);c++){
        if(senha[c]>64 && senha[c]<91){
            bole3=1;
        }
    }
    //numero
    for(int c=0;c<strlen(senha);c++){
        if(senha[c]>47 && senha[c]<58){
            bole4=1;
        }
    }
    // caracter especial 
   for(int c=0;c<strlen(senha);c++){
        if((senha[c]>31 && senha[c]<48) || (senha[c]>57 && senha[c]<65) || (senha[c]>90 && senha[c]<97) || (senha[c]>123 && senha[c]<127)){
            bole5=1;
        }
    }
    if(bole1==1 && bole2==1 && bole3==1 && bole4==1 && bole5==1){
        printf("Senha valida\n");
    } else{
        printf("Senha invalida\n");
    }
    
    return 0;
}
