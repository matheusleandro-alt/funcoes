#include <stdio.h>

int multiplicar(int a, int b){
    int resultado = 0;
    int negativo = 0;
    int i;

    if(a<0){
        a = -a;
        negativo = negativo + 1;
    }

    if(b<0){
        b = -b;
        negativo = negativo + 1;
    }

    for(i=0; i<b; i++){
        resultado = resultado + a;
    }

    if(negativo==1){
        resultado = -resultado;
    }
    return resultado;
}
int main(){
    int x, y;

    printf("\nInsira o valor do fator: ");
    scanf("%d", &x);

    printf("\nInsira o valor do fator: ");
    scanf("%d", &y);

    printf("\nO resultado da multiplicação é: %d", multiplicar(x, y));
    
    return 0;
}