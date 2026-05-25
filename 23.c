#include <stdio.h>
#include <math.h>

int treze(float a, float b){
    int contador = 0;
    for(int i=ceil(a); i<=floor(b); i++){
        if(i%13==5){
            contador++;
        }
    }
    return contador;
}

int main(){
    float a, b;

    printf("\nInsira o primeiro valor");
    scanf("%f", &a);
    printf("\nInsira o segundo valor");
    scanf("%f", &b);

    printf("\nQuantidade de restos 5 intermediários na divisão por 13: %d", treze(a, b));
    }