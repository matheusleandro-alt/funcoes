#include <stdio.h>

int meu_strlen(char str[]){
    int i = 0;
    while (str[i]!='\0'){
        i++;
    }
    return i;
}

int meu_strcmp(char str1[], char str2[]){
    int i=0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        if(str1[i]!=str2[i]){
            return 0;
        }
        i++;
    }
    return (str1[i] == '\0' && str2[i] == '\0');
}

void meu_strncpy(char destino[], char origem[], int n){
    int i;

    for (i=0; i<n && origem[i] != '\0'; i++){
        destino[i]=origem[i];
    }

    destino[i]='\0';
}

void meu_strcat(char destino[], char origem[]) {
    int i = 0, j = 0;

    while(destino[i]!='\0'){
        i++;
    }

    while(origem[j]!='\0'){
        destino[i] = origem[j];
        i++;
        j++;
    }

    destino[i]='\0';
}

void meu_strnd(char texto[], char busca[]) {
    int i, j;
    int encontrou;
    int tamBusca = meu_strlen(busca);

    for (i=0; texto[i]!='\0'; i++){
        encontrou=1;

        for (j=0; j <tamBusca; j++) {
            if (texto[i + j] != busca[j]){
                encontrou=0;
                break;
            }
        }

        if(encontrou) {
            printf("Encontrado na posição %d\n", i);
        }
    }
}

int main(){
    char str1[100];
    char str2[100];
    char copia[100];
    char texto[100];
    char busca[100];
    int n;

    printf("Digite a primeira string: ");
    scanf("%s", str1);

    printf("Digite a segunda string: ");
    scanf("%s", str2);

    printf("\nTamanho da primeira string: %d\n", meu_strlen(str1));

    if(meu_strcmp(str1, str2)){
        printf("As strings são iguais\n");
    }else{
        printf("As strings são diferentes\n");
    }

    printf("\nQuantos caracteres deseja copiar?");
    scanf("%d", &n);

    meu_strncpy(copia, str1, n);
    printf("String copiada: %s\n", copia);

    meu_strcat(str1, str2);
    printf("Strings concatenadas: %s\n", str1);

    printf("\nDigite um texto: ");
    scanf("%s", texto);

    printf("Digite a palavra a procurar: ");
    scanf("%s", busca);

    meu_strnd(texto, busca);

    return 0;
}