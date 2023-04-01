/*Escreva um algoritmo que leia o salário e o nome de 20 funcionários e retorne
o nome e o salário do funcionário que ganha mais. Todos os salários são diferentes.*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char nomes[20][50];
    float salarios[20];
    float maioSalario = 0.0;
    int indexMaior;

    for(int i = 0; i < 20; i++){
        printf("Informe o nome do funcionario %d: ", i+ 1);
        scanf("%s", nomes[i]);

        printf("Informe o salario do funcionario %d: ", i+1);
        scanf("%f", &salarios[i]);

        if(salarios[i] > maioSalario){
            maioSalario = salarios[i];
            indexMaior = i;
        }

        printf("\n");
    }

    printf("o maior salario e o do funcionario %s, de R$%.2f\n", nomes[indexMaior], salarios[indexMaior]);


    return 0;
}
