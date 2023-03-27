/* Transforme a temperatura fornecida em C para a correspondente em F
(C = 5/9(f-32)) e retorne o resultado.*/

#include <stdio.h>

int main(void){
    float C, F, aux;

    printf("Temperatura Celsius: ");
    scanf("%f", &C);

    F = (C*9)/5 + 32;

    printf("Temperatura Fahrenheit: %.2f\n", F);

    return 0;
}