#include <stdio.h>

void binario(int a){
    if(a<0){
        printf("\nValor inválido. ");
        exit(1);
    }

    if(a>1){
        binario(a/2);
    }

    printf("%d",a%2);
}

int main(){
    int a;

    printf("\nTransformação em binário: ");
    scanf("%d", &a);
    printf("\n");

    binario(a);
}