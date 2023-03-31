/*Elabore um algoritmo para retornar o valor inteiro da divisão de dois números
e o resto da divisão entre esses dois números.*/

#include <stdio.h>

float divisao(int a, int b){
    float divisao = a / b;
    return divisao;
}

int resto(int a, int b){
    int resto = a % b;
    return resto;
}

int main(void){
    int a, b, r;
    float d;

    printf("primeiro numero = ");
    scanf("%d", &a);

    printf("segundo numero = ");
    scanf("%d", &b);

    d = divisao(a, b);
    r = resto(a, b);

    printf("%d/%d ~ %.2f\n", a, b, d);
    printf("%d %% %d = %d\n", a, b, r);

    return 0;
}