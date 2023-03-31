/*Escreva um algoritmo que imprima os 100 primeiros números ímpares começando de 1.*/

#include <stdio.h>

int main(void) {
    int cont = 0;
    int num = 1;

    while (cont < 100) {
        if (num % 2 != 0) {
            printf("%d ", num);
            cont++;
        }
        num++;
    }

    printf("\n");

    return 0;
}