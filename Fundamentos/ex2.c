/* Receba dois valores e retorne a divisão do primeiro pelo segundo. */

#include <stdio.h>

int main(void){
    float x, y, divisao;

    printf("Primeiro valor: ");
    scanf("%f", &x);

    printf("Segundo valor: ");
    scanf("%f", &y);

    if(y != 0){
        printf("%.2f / %.2f ≈ %.2f\n", x, y, x/y);
    } else {
        printf("Nao e possivel fazer divisao por zero");
    }

    return 0;
}