/* Elabore um algoritmo que calcule quantas notas de 50, 10 e 1 são
necessárias para se pagar uma conta cujo valor é fornecido.*/

#include <stdio.h>
int qtdNotas, valoresNotas;

int calcularNotas(int valorConta, int valorNota){
    qtdNotas = valorConta/valorNota;
    valoresNotas = valorNota * qtdNotas;

    return qtdNotas, valoresNotas;
}

int main(void){
    int valor, valorDescontado;
    int notas[3] = {50,10,1}, i=0;

    printf("Valor da conta: ");
    scanf("%d", &valor);

    valorDescontado = valor;

    printf("Para pagar a conta sao necessarias:\n");
    while(valorDescontado != 0){
        qtdNotas, valoresNotas = calcularNotas(valorDescontado, notas[i]);
        printf(" - %d nota(s) de %d\n", qtdNotas, notas[i]);
        valorDescontado -= valoresNotas;
        i += 1;
    }

    return 0;
}