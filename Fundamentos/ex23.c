/*Calcular a soma dos números pares de 100 até 200, inclusive.*/

#include <stdio.h>
#include <string.h>

int main(void) {
    int primeiro_par = 100;
    int ultimo_par = 200;
    int quantidade_pares = (ultimo_par - primeiro_par) / 2 + 1;
    int soma_pares = quantidade_pares * (primeiro_par + ultimo_par) / 2;

    printf("A soma dos numeros pares de 100 a 200 e: %d\n", soma_pares);

    return 0;
}