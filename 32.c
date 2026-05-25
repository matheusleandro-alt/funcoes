#include <stdio.h>

float temp(float F){
    float C;
    C = 5*(F-32)/9;

    return C;
}

int main(){
    for(float F = 50; F<=150; F++){
        printf("\nTemperatura: %f ºF", F);
        printf("\nTemperatura: %f ºC", temp(F));
        printf("\n");
    }
}