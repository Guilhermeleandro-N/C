
#include <stdio.h>
float jurossimples(float C,float I, float T);
int main()
{
    float C,I,T,M;
    printf("Sou uma calculadora de juros simples!\nCapital inicial:\n");
    scanf("%f", &C);
    printf("Taxa de juros:\n");
    scanf("%f",&I);
    printf("Periodo:\n");
    scanf("%f",&T);
    M=jurossimples(C,I,T);
    printf("O montante final é %.2f", M);
    
    

    return 0;
}
float jurossimples(float C, float I, float T){
    float M;
    M=(C*I*T)/100;
    return M;
}