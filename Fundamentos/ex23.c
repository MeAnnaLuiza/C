/*Calcular a soma dos números pares de 100 até 200, inclusive.*/

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
