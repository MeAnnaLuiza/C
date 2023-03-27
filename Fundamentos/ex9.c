/*Elabore um algoritmo que, tendo como dados de entrada dois pontos quaisquer
do plano, P(x1, y1) e Q(x2, y2), imprima a distância entre eles.*/
//PARA COMPILAR COM GCC: gcc ex9.c -lm -o saida

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calculaDistancia(int x1, int y1, int x2, int y2){
    return sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
}

int main(void){
    float x1, x2, y1, y2, dist;

    printf("Coordenadas ponto P:\n");
    printf("x1: ");
    scanf("%f", &x1);
    printf("y1: ");
    scanf("%f", &y1);

    printf("Coordenadas ponto Q:\n");
    printf("x2: ");
    scanf("%f", &x2);
    printf("y2: ");
    scanf("%f", &y2);

    dist = calculaDistancia(x1, y1, x2, y2);

    if(dist < 0){
        printf("Nao foi possivel cacular a distancia.\n");
    } else {
        printf("A distancia entre os pontos P(%.2f, %.2f) e Q(%.2f, %.2f) e de %.2f unidades\n", x1,y1,x2,y2,dist);
    }

    return 0;
}