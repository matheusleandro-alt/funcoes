#include <stdio.h>

int primo(int a){
    int i;

    if(a<=1){
        return 0;
    }
    if(a==2){
        return 1;
    }
    if(a>=3){
        for(i=2; i<=a/2; i++){
            if(a%i==0){
                return 0;
            }
        }
    }
    return 1;
    }

    int main(){
        int x;

        printf("\nInsira o valor: ");
        scanf("%d", &x);

        printf("\n%d", primo(x));
    }