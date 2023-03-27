/* Elabora um algoritmo para ler dois valores inteiros, efeutar e mostrar o resultado
das operações de adição, subtração, multiplicação e divisão do primeiro pelo segundo.
Considere que todos os números são diferentes de zero.*/

#include <stdio.h>
int main(void){
    int x, y;

    printf("Primeiro valor: ");
    scanf("%d", &x);

    printf("Segundo valor: ");
    scanf("%d", &y);

    printf("%d + %d = %d\n", x,y, x+y);
    printf("%d - %d = %d\n", x,y, x-y);
    printf("%d * %d = %d\n", x,y, x*y);
    y != 0 ? printf("%d / %d = %.1f\n", x,y, (float)x/y) : printf("Nao e possivel fazer divisao por zero.\n");

    return 0;
}