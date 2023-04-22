/*Foi feita uma pesquisa entre os habitantes de uma região. Foram coletados os
dados de idade, sexo (M/F) e salário. Faça um algoritmo que informe: a média de
salário do grupo; maior e menor idade do grupo e a quantidade de mulheres com
salário até R$100,00. Encerre a entrada de dados quando for digitada uma idade
negativa.*/

#include <stdio.h>

int main(void){
    int idade, cont_mulheres_salario_ate_100 = 0, cont_pessoas = 0;
    char sexo;
    float salario, soma_salario = 0, media_salario;
    int maior_idade = -1, menor_idade = 999;

    do {
        printf("Digite a idade: ");
        scanf("%d", &idade);
        if (idade < 0) {
            break;
        }

        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);

        printf("Digite o salario: ");
        scanf("%f", &salario);

        soma_salario += salario;
        cont_pessoas++;

        if (idade > maior_idade) {
            maior_idade = idade;
        }

        if (idade < menor_idade) {
            menor_idade = idade;
        }

        if (sexo == 'F' && salario <= 100) {
            cont_mulheres_salario_ate_100++;
        }

    } while (1);

    if (cont_pessoas > 0) {
        media_salario = soma_salario / cont_pessoas;
        printf("Media salarial: R$%.2f\n", media_salario);
        printf("Maior idade: %d\n", maior_idade);
        printf("Menor idade: %d\n", menor_idade);
        printf("Mulheres com salario ata R$100,00: %d\n", cont_mulheres_salario_ate_100);
    } else {
        printf("Nenhum dado foi inserido.\n");
    }

    return 0;
}