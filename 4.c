#include <stdio.h>

int inverso(int a){
    int invertido = 0;
    int negativo = 0;

    if(a<0){
        negativo = 1;
        a = -a;
    }

    while(a>0){
        invertido = invertido*10+(a%10);
        a = a/10;
    }

    if(negativo){
        invertido = -invertido;
    }
    return invertido;
}

    int main(){
        int x;

        printf("\nInsira o valor: ");
        scanf("%d", &x);

        printf("\nO inverso é: %d", inverso(x));
        return 0;
    }
