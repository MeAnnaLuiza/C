/*Escreva um algoritmo que leia o nome do funcionário, o salário bruto, o valor do
desconto e a gratificação do funcionário e escreva na tela o nome e o valor do
salário líquido. Os nomes devem ser lidos até que a seqüência XXXX seja digitada.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char nome[50];
  float salarioBruto, desconto, gratificacao, salarioLiquido;

  while (1) {
    printf("Digite o nome do funcionario (ou XXXX para sair): ");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = '\0'; // remove o caracter de quebra de linha da string

    if (strcmp(nome, "XXXX") == 0) { // se o nome for XXXX, sai do loop
      break;
    }

    printf("Digite o salario bruto: ");
    scanf("%f", &salarioBruto);
    printf("Digite o valor do desconto: ");
    scanf("%f", &desconto);
    printf("Digite a gratificacao: ");
    scanf("%f", &gratificacao);

    salarioLiquido = salarioBruto - desconto + gratificacao;

    printf("\n--------------------------------------------------------\n");
    printf("Nome: %s\n", nome);
    printf("Salario liquido: R$%.2f\n", salarioLiquido);
    printf("--------------------------------------------------------\n");

    // limpa o buffer do teclado antes de começar a próxima iteração
    while (getchar() != '\n');
    printf("\n");
  }

  return 0;
}
