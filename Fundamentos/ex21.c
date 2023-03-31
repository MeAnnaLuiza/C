/*Escreva um algoritmo que leia 15 números e imprima a média dos números digitados.*/

#include <stdio.h>

int main(void){
    float numeros[15], media = 0.0;

    printf("Digite os numeros, separados por espaco:\n");

    for(int i = 0; i < 15; i++){
        scanf("%f", &numeros[i]);
        media += numeros[i];
    }

    printf("a media dos numeros e: %.2f\n", media/15);

    return 0;
}