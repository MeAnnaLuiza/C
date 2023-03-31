/*Escreva um algoritmo que leia dez números e imprima a soma dos números digitados.
O valor n deve ser informadoo pelo usuário.*/

#include <stdio.h>

int main(void) {
    int n, i;
    float numero, soma = 0;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    printf("Digite os %d numeros, separados por espaco:\n", n);

    for(i = 1; i <= n; i++) {
        scanf("%f", &numero);
        soma += numero;
    }

    printf("A soma dos %d numeros e: %.2f\n", n, soma);

    return 0;
}