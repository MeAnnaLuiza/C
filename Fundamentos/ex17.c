/*Escreva um algoritmo que leia dez números e imprima a soma dos números digitados.*/

#include <stdio.h>

int main(void) {
    int numeros[10], soma = 0;

    printf("digite dez números, separados por espaço:\n");

    for (int i = 0; i < 10; i++){
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    printf("a soma dos numeros e: %d\n", soma);

    return 0;
}
