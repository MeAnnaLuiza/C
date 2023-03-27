/*Escreva um algoritmo para calcular e escrever  a área de um triângulo, sendo dados 
a sua base e a sua altura.*/

#include <stdio.h>

float claculaArea(float base, float altura){
    float area = (base * altura)/2;
    return area;
}

int main(void){
    float b, h, s;

    printf("base = ");
    scanf("%f", &b);

    printf("altura = ");
    scanf("%f", &h);

    s = claculaArea(b, h);

    printf("area ~ %.2f\n", s);
    return 0;
}