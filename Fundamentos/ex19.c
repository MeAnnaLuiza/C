/*Escreva um algoritmo que leia sequência de números digitados pelo usuário até que
o número 0 seja digitado e retorne a soma dos números digitados.*/

#include <stdio.h>

int main(void) {
    int numero, soma = 0;

    do {
        printf("Digite um numero (ou 0 para sair): ");
        scanf("%d", &numero);
        soma += numero;
    } while (numero != 0);

    printf("A soma dos numeros digitados e: %d\n", soma);

    return 0;
}