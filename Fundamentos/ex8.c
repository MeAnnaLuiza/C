/*Elabore um algoritmo para calcular as raízes de uma equação do segundo grau (ax² + bx + c).
Considere que a ∊ ℝ* e (b² - 4ac) > 0. Escreva os valores na tela.*/
//PARA COMPILAR COM GCC: gcc ex8.c -lm -o saida

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calculaDelta(int a, int b, int c){
    return (b * b) - 4 * a * c;
}

int main(void){
    double a, b, c, x1, x2, delta;

    printf("Montar a a equacao ax² + bx + c\n");

    printf("Valor de a: ");
    scanf("%lf", &a);

    printf("Valor de b: ");
    scanf("%lf", &b);

    printf("Valor de c: ");
    scanf("%lf", &c);

    delta = calculaDelta(a,b,c);

    if(delta > 0){
        x1 = (- b + sqrt(delta))/2 * a;
        x2 = (- b - sqrt(delta))/2 * a; 

        printf("Para a equcacao %.0fx² + %.0fx + %.0f, as raizes sao %.2f e %.2f.\n", a, b, c, x1, x2);
    } else {
        printf("A equacao nao possui raizes reais.\n");
    }

    return 0;
}