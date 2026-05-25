#include <stdio.h>

float comb(int n, int r){
    int a = 1;
    for(int i=n; i>0; i--){
        a = a*i;
    }
    int b = 1;
    for(int i=r; i>0; i--){
        b = b*i;
    }
    int c = 1;
    for(int i=n-r; i>0; i--){
        c = c*i;
    }
    float d = a/(b*c);
    return d;
}

int main(){
    int n, r;

    printf("Número n: ");
    scanf("%d", &n);
    printf("\n Tomados de r: ");
    scanf("%d", &r);

    printf("\nNúmero de combinações: %f", comb(n, r));
}