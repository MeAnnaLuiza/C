#include <stdio.h>

int main(){
    int X[5], n, i, j, eleito, opcao;
    printf("Escolha a ordem da ordenação (1 - crescente, 2 - decrescente): ");
    scanf("%d", &opcao);

    for(int i=0; i<=4; i++){
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &X[i]);
    }

    printf("\nDesordenado: ");
    for(int i=0; i<=4; i++){
        if(i != 4) printf("%d - ", X[i]);
        else printf("%d", X[i]);
    }

   for(i=0; i<=4; i++){
    eleito = X[i];
    j = i - 1;

    while(opcao == 1 ? j >= 0 && X[j] > eleito : j >= 0 && X[j] < eleito){
        X[j+1] = X[j];
        j = j - 1;
    }

    X[j+1] = eleito;

   }

    printf("\nOrdenado: ");
    for(int i=0; i<=4; i++){
        if(i != 4) printf("%d - ", X[i]);
        else printf("%d\n", X[i]);
    }

    return 0;
}