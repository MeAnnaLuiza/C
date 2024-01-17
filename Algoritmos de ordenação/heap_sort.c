#include <stdio.h>

int X[11];

void heap_fica(int i, int qtde, int opcao){
    int f_esq, f_dir, maior, aux;
    maior = i;

    if(2*i+1 <= qtde){
        f_esq = 2*i+1;
        f_dir = 2*i;

        if(opcao == 1 ? X[f_esq] >= X[f_dir] && X[f_esq] > X[i] : X[f_esq] <= X[f_dir] && X[f_esq] < X[i]) maior = 2*i+1;
        else if(opcao == 1 ? X[f_dir] > X[f_esq] && X[f_dir] > X[i] : X[f_dir] < X[f_esq] && X[f_dir] < X[i]) maior = 2*i;
    } else if(2*i <= qtde){
        f_dir = 2*i;
        if(opcao == 1 ? X[f_dir] > X[i] : X[f_dir] < X[i]) maior = 2*i;
    }

    if(maior != i){
        aux = X[i];
        X[i] = X[maior];
        X[maior] = aux;
        heap_fica(maior, qtde, opcao);
    }
}

void transforma_heap(int qtde, int opcao){
    int i, pai, aux;
    for(i = qtde/2; i >= 1; i--) heap_fica(i, qtde, opcao);
}

void ordena(int qtde, int opcao){
    int i, aux, ultima_posicao;

    for(i = qtde; i >= 2; i--){
        aux = X[1];
        X[1] = X[i];
        X[i] = aux;
        ultima_posicao = i-1;
        heap_fica(1, ultima_posicao, opcao);
    }
}

void main(){
    int i, qtde, opcao;

    printf("Escolha a ordem da ordenação (1 - crescente, 2 - decrescente): ");
    scanf("%d", &opcao);

    for(i = 1; i <= 10; i++){
        printf("Digite o %dº numero: ", i);
        scanf("%d", &X[i]);
    }


    printf("\nDesordenado: ");
    for(int i=1; i<=10; i++){
        if(i != 10) printf("%d - ", X[i]);
        else printf("%d", X[i]);
    }

    qtde = 10;
    transforma_heap(qtde, opcao);
    ordena(qtde, opcao);

    printf("\nOrdenado: ");
    for(int i=1; i<=10; i++){
        if(i != 10) printf("%d - ", X[i]);
        else printf("%d\n", X[i]);
    }
}