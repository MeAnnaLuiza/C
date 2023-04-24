/*Escrever um algoritmo que leia uma quantidade desconhecida de números
inteiros e conte quantos deles estão nos seguintes intervalos: [0-25], [26-50],
[51-75] e [76-100]. A entrada de dados deve terminar quando for lido um número
negativo.*/

#include <stdio.h>

int main(void){
    int num, intervalo1 = 0, intervalo2 = 0, intervalo3 = 0, intervalo4 = 0;

    printf("Digite uma sequencia de numeros inteiros (termine com um numero negativo):\n");

    while (1) {
        scanf("%d", &num);

        if (num < 0) {
            break;
        }

        if (num >= 0 && num <= 25) {
            intervalo1++;
        } else if (num >= 26 && num <= 50) {
            intervalo2++;
        } else if (num >= 51 && num <= 75) {
            intervalo3++;
        } else if (num >= 76 && num <= 100) {
            intervalo4++;
        }
    }

    printf("Quantidade de numeros nos intervalos:\n");
    printf("[0-25]: %d\n", intervalo1);
    printf("[26-50]: %d\n", intervalo2);
    printf("[51-75]: %d\n", intervalo3);
    printf("[76-100]: %d\n", intervalo4);

    return 0;
}
