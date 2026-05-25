#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int palindromo(char palavra[]){
    int i;
    
    for(i=0; palavra[i]!='\0'; i++) {
        palavra[i] = tolower(palavra[i]);
    }
    for(i=0; i<=strlen(palavra)/2; i++){
        if(palavra[i]!=palavra[strlen(palavra)-i-1]){
            return 0;
        }
    }
    return 1;
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    char palavra[46];

    printf("Palavra: ");
    fgets(palavra, sizeof(palavra), stdin);
    palavra[strcspn(palavra, "\n")] = '\0';

    if(palindromo(palavra)==1){
        printf("É palíndromo\n");
    }
    else{
        printf("Não é palíndromo\n");
    }
}