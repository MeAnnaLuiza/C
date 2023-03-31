/*Escreva um algoritmo que leia a categoria de uma lista de funcionários e retorne
o salário do funcionário considerando a regra abaixo. Além do salário, retorne a
soma do salário de todas as categorias digitadas.
- Categoria A – Salário 10.000
- Categoria B – Salário 5.000
A lista termina quando for digitada uma categoria = X. Caso usuário digite uma
categoria diferente, deve ser exibida uma mensagem: Categoria Inválida*/

#include <stdio.h>

int main(void) {
    char categoria;
    int salario, soma_salarios = 0;

    do {
        printf("Digite a categoria do funcionario (A ou B, ou X para sair): ");
        scanf(" %c", &categoria);

        switch (categoria) {
            case 'A':
                salario = 10000;
                soma_salarios += salario;
                printf("Salario: %d\n", salario);
                break;

            case 'B':
                salario = 5000;
                soma_salarios += salario;
                printf("Salario: %d\n", salario);
                break;

            case 'X':
                printf("Encerrando...\n");
                break;

            default:
                printf("Categoria invalida.\n");
        }

    } while (categoria != 'X');

    printf("A soma dos salarios e: %d\n", soma_salarios);

    return 0;
}
