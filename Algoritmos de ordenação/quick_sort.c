#include <stdio.h>

void troca(int X[], int i, int j){
    int aux;
    aux = X[i];
    X[i] = X[j];
    X[j] = aux;
}

int particao(int X[], int p, int r, int opcao){
    int pivo, i, j;
    pivo = X[(p+r)/2];
    i = p - 1;
    j = r + 1;

    while(i < j){
        do{
            j = j - 1;
        } while(opcao == 1 ? X[j] > pivo : X[j] < pivo);

        do{
            i = i + 1;
        } while(opcao == 1 ? X[i] < pivo :  X[i] > pivo);

        if(i < j) troca(X, i, j);
    }

    return j;
}

void quicksort(int X[], int p, int r, int opcao){
    int q;

    if(p < r){
        q = particao(X, p, r, opcao);
        quicksort(X, p, q, opcao);
        quicksort(X, q+1, r, opcao);
    }
}

void main(){
    int X[10], i, opcao;

    printf("Escolha a ordem da ordenação (1 - crescente, 2 - decrescente): ");
    scanf("%d", &opcao);

    for(i=0;i<=9;i++){
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &X[i]);
    }

    printf("\nDesordenado: ");
    for(int i=0; i<=9; i++){
        if(i != 9) printf("%d - ", X[i]);
        else printf("%d", X[i]);
    }

    quicksort(X, 0, 9, opcao);

    printf("\nOrdenado: ");
    for(int i=0; i<=9; i++){
        if(i != 9) printf("%d - ", X[i]);
        else printf("%d\n", X[i]);
    }
}