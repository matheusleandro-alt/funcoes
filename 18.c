#include <stdio.h>

int entre(int x){
    int soma = 0;
    int i;

    if(x<0){
        printf("\nValor inválido.");
        exit(1);
    }

    for(i=2; i<x; i++){
        soma = soma + i;
    }

    return soma;
}

int main(){
    int x;

    printf("\nInsira o valor de x: ");
    scanf("%d", &x);

    printf("\nA soma dos valores intermediários é: %d", entre(x));
}