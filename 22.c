#include <stdio.h>

int quadrado(int a){
    for(int i=1; i<a; i++){
        if(i*i>a){
            return i;
        }
    }
}

int main(){
    int a;

    printf("\nInsira o número: ");
    scanf("%d", &a);

    printf("\nO menor número cujo quadrado é menor é: %d", quadrado(a));
}