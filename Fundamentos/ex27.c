/*Escreva um algoritmo para calcular N! (fatorial de N), sendo que o valor inteiro
de N é fornecido pelo usuário. Sabe-se que: N! = 1 * 2 * ... * (N-1) * N; 0! = 1,
por definição*/

#include <stdio.h>

int main() {
  double n, i, fatorial = 1;

  printf("Digite um valor inteiro para calcular o fatorial: ");
  scanf("%lf", &n);

  if (n < 0) {
    printf("Valor inválido. O fatorial só pode ser calculado para valores inteiros não negativos.\n");
  } else {
    for (i = 1; i <= n; i++) {
      fatorial *= i;
    }
    printf("%lf! = %lf\n", n, fatorial);
  }

  return 0;
}