#include <stdio.h>

void intercala(int X[], int inicio, int fim, int meio, int opcao){
    int poslivre, inicio_vetor1, inicio_vetor2, i;
    int aux[10];

    inicio_vetor1 = inicio;
    inicio_vetor2 = meio + 1;
    poslivre = inicio;

    while(inicio_vetor1 <= meio && inicio_vetor2 <= fim){
        if(opcao == 1 ? X[inicio_vetor1] <= X[inicio_vetor2] : X[inicio_vetor1] >= X[inicio_vetor2]){
            aux[poslivre] = X[inicio_vetor1];
            inicio_vetor1 = inicio_vetor1 + 1;
        } else {
            aux[poslivre] = X[inicio_vetor2];
            inicio_vetor2 = inicio_vetor2 + 1;
        }
        poslivre = poslivre + 1;
    }

    for(i=inicio_vetor1; i<=meio;i++){
        aux[poslivre] = X[i];
        poslivre = poslivre + 1;
    }

    for(i=inicio_vetor2; i<=fim;i++){
        aux[poslivre] = X[i];
        poslivre = poslivre + 1;
    }

    for(i=inicio;i<=fim;i++){
        X[i] = aux[i];
    }
}

void merge(int X[], int inicio, int fim, int opcao){
    int meio;

    if(inicio < fim){
        meio = (inicio + fim)/2;
        merge(X, inicio, meio, opcao);
        merge(X, meio+1, fim, opcao);
        intercala(X, inicio, fim, meio, opcao);
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

    merge(X, 0, 9, opcao);

    printf("\nOrdenado: ");
    for(int i=0; i<=9; i++){
        if(i != 9) printf("%d - ", X[i]);
        else printf("%d\n", X[i]);
    }
}