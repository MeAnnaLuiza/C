/*Crie um algoritmo que leia os limites inferior e superior de um intervalo e
imprima todos os números inteiros pares no intervalo aberto e o somatório desses
números. Suponha que os números digitados sejam crescentes, ou seja, o primeiro
valor é menor que o segundo.*/

#include <stdio.h>

int main(void){
    int min, max, soma = 0;

    printf("digite o limite inferior: ");
    scanf("%d", &min);

    printf("digite o limite superior: ");
    scanf("%d", &max);

    for(int i = min + 1; i < max; i++){
        if(i % 2 == 0){
            soma += i;
        }
    }

    printf("soma dos números pares no intervalo aberto e: %d\n", soma);

    return 0;
}