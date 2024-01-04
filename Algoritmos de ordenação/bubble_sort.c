#include <stdio.h>

int main(){
    int X[5], n, i, aux, troca, opcao;
    printf("Escolha a ordem da ordenação (1 - crescente, 2 - decrescente): ");
    scanf("%d", &opcao);

    for(int i=0; i<=4; i++){
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &X[i]);
    }

    n = 1;
    troca = 1;

    printf("\nDesordenado: ");
    for(int i=0; i<=4; i++){
        if(i != 4) printf("%d - ", X[i]);
        else printf("%d", X[i]);
    }

    while (n <= 5 && troca == 1){
        troca = 0;
        for(i=0; i<=3; i++) {
            if(opcao == 1 ? X[i] > X[i+1] : X[i] < X[i+1]){
                troca = 1;
                aux = X[i];
                X[i] = X[i+1];
                X[i+1] = aux;
            }
        }
        n = n + 1;
    }

    printf("\nOrdenado: ");
    for(int i=0; i<=4; i++){
        if(i != 4) printf("%d - ", X[i]);
        else printf("%d\n", X[i]);
    }

    return 0;
}