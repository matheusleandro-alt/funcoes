#include <stdio.h>

int triangulo(int a, int b, int c){
    if(a<=0 || b<=0 || c<=0){
        return 0;
    }
    if(a<b+c && b<c+a && c<b+a){
    if(a==b && b==c){
        return 1;
    }

    if((a==b && a!=c) || (b==c && b!=a) || (a==c && c!=a)){
        return 2;
    }

    if(a!=b && b!=c && c!=a){
        return 3;
    }
}
return 0;
}

    int main(){
        int a, b, c;

        printf("\nValor do lado: ");
        scanf("%d", &a);
        printf("\nValor do lado: ");
        scanf("%d", &b);
        printf("\nValor do lado: ");
        scanf("%d", &c);

        printf("%d", triangulo(a, b, c));
    }