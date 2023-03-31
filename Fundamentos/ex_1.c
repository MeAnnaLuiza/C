/* Uma quantidade N de canetas iguais foram pagas com uma nota de x reais,
obtendo-se y reais de troco. Retorne quanto custou cada caneta. */

#include <stdio.h>

float valorPorCaneta(int qtd, int preco, float troco){
    return (preco - troco)/qtd;
}

int main(void){
    int N, x;
    float y, valorCaneta;

    printf("Quantidade de canetas N: ");
    scanf("%d", &N);

    printf("Valor da nota (valor inteiro): ");
    scanf("%d", &x);

    printf("Troco (com centavos): ");
    scanf("%f", &y);

    valorCaneta = valorPorCaneta(N, x, y);
    printf("Cada caneta custou %.2f\n", valorCaneta);

    return 0;
}