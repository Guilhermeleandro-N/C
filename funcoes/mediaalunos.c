
#include <stdio.h>
float atividades(int natp, int natf);
float bimestre(float avs,float avp, float natv);
float mediafinal(float b1,float b2,float b3,float b4);
int main()
{
    float b1,b2,b3,b4,avs,avp,natv,mfinal;
    int natf,natp;
    //bimeste
    for (int c=1;c<=4;c++){
    if(c==1){
        printf("Informe as notas de atividades do primeiro bimestre:\nAvaliacao escrita:\n");
    }else if(c==2){
        printf("Informe as notas de atividades do segundo bimestre:\nAvaliacao escrita:\n");
    }else if(c==3){
        printf("Informe as notas de atividades do terceiro bimestre:\nAvaliacao escrita:\n");
    }else if(c==4){
       printf("Informe as notas de atividades do quarto bimestre:\nAvaliacao escrita:\n"); 
    }
    scanf("%f",&avs);
    printf("avaliacao pratica:\n");
    scanf("%f",&avp);
    printf("Numero de atividades propostas:\n");
    scanf("%d",&natp);
    printf("Numero de atividades feitas:\n");
    scanf("%d",&natf);
    natv=atividades(natp,natf);
    if(c==1){
        b1=bimestre(avs,avp,natv);
    }else if(c==2){
        b2=bimestre(avs,avp,natv);
    }else if(c==3){
        b3=bimestre(avs,avp,natv);
    }else if(c==4){
        b4=bimestre(avs,avp,natv);
    }
    }    
    mfinal=mediafinal(b1,b2,b3,b4);
    //resultados para usuario
    printf("Medias bimestrais\nPrimeiro bimestre:%.2f\nSegundo bimestre:%.2f\nTerceiro bimestre:%.2f\nQuarto bimestre%.2f\nMedia final:%.2f\n",b1,b2,b3,b4,mfinal);
    return 0;
}
float atividades(int natp, int natf){
    float natv;
    natv=((float)natf/natp)*10;
    return natv;
}
float bimestre (float avs,float avp, float natv){
    float b;
    b=(avs+avp+natv)/3;
    return b;
}
float mediafinal(float b1,float b2,float b3,float b4){
    float mfinal;
    mfinal=(b1*2+b2*3+b3*2+b4*3)/10;
    return mfinal;
}
