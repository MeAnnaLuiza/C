/*Escreva um algoritmo para calcular e exibir o comprimento de uma circunferẽncia,
sendo dado o valor de seu raio. C = 2πR.*/

#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159265359

float calculaComprimento(float raio){
    return 2 * raio * PI;
}

int main(void){
    float raio, comprimento;

    printf("Digite o raio da circunferencia: ");
    scanf("%f", &raio);

    comprimento = calculaComprimento(raio);

    printf("O comprimento da circunferencia e %.2f\n", comprimento);

    return 0;
}