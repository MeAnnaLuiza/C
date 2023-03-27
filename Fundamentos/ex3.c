/* Receba dois valores e troque os valores entre si. */

#include <stdio.h>

int main(void){
    int x, y, aux;

    printf("Primeiro valor: ");
    scanf("%d", &x);

    printf("Segundo valor: ");
    scanf("%d", &y);

    aux = x;
    x = y;
    y = aux;

    printf("Agora o primeiro valor e %d e o segundo e %d\n", x, y);

    return 0;
}