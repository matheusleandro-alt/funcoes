#include <stdio.h>
#include <stdlib.h>

int fatorial(int a){
    int resultado = 1;
    int i;
    
    if(a<0){
        printf("\nIndefinido");
        exit(1);
    }

    for(i=a; i>0; i--){
            resultado = resultado * i;
        }

    return resultado;
}

int main(){
    int x;

    printf("\nInsira o valor: ");
    scanf("%d", &x);

    printf("\nO fatorial é %d", fatorial(x));
    return 0;
}