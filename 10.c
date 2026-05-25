#include <stdio.h>

int primos(int x, int y){
    int contador = 0;
    int i = x + 1;
    int primo;
    int j;

    for(i>x; i<y; i++){
        if(i<2){
            continue;
        }
        primo=1;
        for(j=2; j<=i/2; j++){
            if(i%j==0){
                primo = 0;
                break;
            }
        }
        if(primo==1){
            contador++;
        }
    }
    return contador;
}

int main(){
    int x, y;

    printf("\nInsira o menor valor: ");
    scanf("%d", &x);
    printf("\nInsira o maior valor: ");
    scanf("%d", &y);

    printf("\nPrimos: %d", primos(x, y));
}