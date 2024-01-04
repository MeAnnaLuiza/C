#include <stdio.h>

int main(){
    int X[5], n, i, j, eleito, menor, pos, opcao;
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

   for(i=0; i<=3; i++){
    eleito = X[i];
    menor = X[i+1];
    pos = i + 1;

    for(j=i+1;j<=4;j++){
        if(opcao == 1 ? X[j] < menor : X[j] > menor){
            menor = X[j];
            pos = j;
        }
    }

    if(opcao == 1 ? menor < eleito : menor > eleito){
        X[i] = X[pos];
        X[pos] = eleito;
    }
   }

    printf("\nOrdenado: ");
    for(int i=0; i<=4; i++){
        if(i != 4) printf("%d - ", X[i]);
        else printf("%d\n", X[i]);
    }

    return 0;
}