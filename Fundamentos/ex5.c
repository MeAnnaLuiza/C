/* Elabore um algoritmo que receba dois valores e retorne o maior deles.*/

#include <stdio.h>

int main(void){
    int x, y, aux;

    printf("Primeiro valor: ");
    scanf("%d", &x);

    printf("Segundo valor: ");
    scanf("%d", &y);

    if(x > y){
        printf("O maior valor e %d\n", x);
    } else if(x < y){
        printf("O maior valor e %d\n", y);
    } else {
        printf("Os valores sao iguais\n");
    }


    return 0;
}