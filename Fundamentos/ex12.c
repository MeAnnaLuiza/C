/*Faça um algoritmo que receba o peso de uma pessoa, calcule e mostre o novo peso quando
a pessoa engorda 15% e 20% do peso digitado.*/

#include <stdio.h>
#include <stdlib.h>

float peso15, peso20;

float calculaPeso15(float peso){
    peso15 = peso + (peso * 0,15);

    return peso15;
}

float calculaPeso20(float peso){
    peso20 = peso + (peso * 0,20);

    return peso20;
}

int main(void){
    float peso;

    printf("Peso da pessoa em kg: ");
    scanf("%f", &peso);

    peso15 = calculaPeso15(peso);
    peso20 = calculaPeso20(peso);

    printf("O peso apos engordar 15 por cento e %.2f\n", peso15);
    printf("O peso apos engordar 20 por cento e %.2f\n", peso20);

    return 0;
}