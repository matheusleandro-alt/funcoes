#include <stdio.h>

float potencia(float a, int b){
    float resultado = 1;

    if(b<0){
        a = 1/a;
        b = -b;
    }

    for(; b>0; b--){
        resultado = resultado * a;
    }

    return resultado;
}

int main(){
    int x, y;
    float c;

    printf("\nInsira o valor da base: ");
    scanf("%d", &x);
    c = (float)x;

    printf("\nInsira o valor do expoente: ");
    scanf("%d", &y);

    printf("\nO resultado é: %f", potencia(c, y));
    return 0;
}