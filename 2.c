#include <stdio.h>
#include <stdlib.h>

int divisao(int a, int b){
    int resultado = 0;
    int negativo = 0;

    if(b==0){
        printf("\nIndeterminação por divisão por zero");
        exit(1);
    }

    if(b<0){
        b = -b;
        negativo = negativo + 1;
    }

    if(a<0){
        a = -a;
        negativo = negativo + 1;
    }

    while(a>=b){
        a = a-b;
        resultado = resultado + 1;
    }

    if(negativo==1){
        resultado = -resultado;
    }
    return resultado;
}

    int main(){
        int x, y;

        printf("\nInsira o valor do dividendo: ");
        scanf("%d", &x);
        printf("\nInsira o valor do divisor: ");
        scanf("%d", &y);

        printf("\nO quociente será: %d", divisao(x, y));
        return 0;
    }