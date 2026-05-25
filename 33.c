#include <stdio.h>

void divisores(int a){
    for(int i = 1; i<=a; i++){
        if(a%i==0){
            printf("\nDivisor: %d", i);
        }
        }
}

int main(){
    int a;

    printf("\nInsira o valor: ");
    scanf("%d", &a);

    divisores(a);
}