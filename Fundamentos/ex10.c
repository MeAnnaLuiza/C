/*Elabore um algoritmo para calcular e exibir a média ponderada de duas notas dadas.
A nota 1 tem peso 6 e a nota 2 tem peso 4.*/

#include <stdio.h>
#include <stdlib.h>

float calculaMedia(float notas[], float pesos[]){
    float media = 0, somaPesos = 0;

    for(int i = 0; i < 2; i++){
        media += notas[i] * pesos[i];
        somaPesos += pesos[i];
    }

    return media = media / somaPesos;
}

int main(void){
    float notas[2], pesos[2], medpond;

    for(int i = 0; i < 2; i++){
        printf("Digite a nota e seu respectivo peso:\n");
        scanf("%f", &notas[i]);
        scanf("%f", &pesos[i]);
    }

    medpond = calculaMedia(notas, pesos);

    printf("A media ponderada e %.2f\n", medpond);

    return 0;
}