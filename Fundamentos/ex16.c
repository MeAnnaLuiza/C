/*Escreva um algoritmo que leia dez números e imprima a metade de cada número.*/

#include <stdio.h>

int main(void) {
    int numeros[10];

    printf("digite dez números, separados por espaço:\n");

    for (int i = 0; i < 10; i++){
        scanf("%d", &numeros[i]);
    }

    printf("\na metade dos numeros sao:\n");

    for (int i = 0; i < 10; i++){
        printf("%.1f ", (float) numeros[i]/2);
    }

    printf("\n");

    return 0;
}
