#include <stdio.h>

void fibo(int n){
    int V[n];
    int i;
    V[0]=0;
    V[1]=1;
    if(n==0){
        return;
    }
    if(n>=1){
        printf("%d", V[0]);
    }
    if(n>=2){
        printf("%d", V[1]);
    }
    for(i=2; i<n; i++){
        V[i]=V[i-1]+V[i-2];
        printf("%d", V[i]);
    }
}

int main(){
    int n;

    printf("\nInsira o comprimento da sequência: ");
    scanf("%d", &n);

    fibo(n);
}