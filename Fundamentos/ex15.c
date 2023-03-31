/*Considere um número de 3 dígitos, usando os operadores \ (divisão inteira) e
% (resto da divisão), imprima o algarismo correspondente à centena e o algarismo
correspondente à dezena.*/

#include <stdio.h>

int main(void) {
    int numero, centena, dezena;

    printf("Digite um numero de tres digitos: ");
    scanf("%d", &numero);

    centena = numero / 100;
    dezena = (numero / 10) % 10;

    printf("A centena e: %d\n", centena);
    printf("A dezena e: %d\n", dezena);

    return 0;
}
